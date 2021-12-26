from elasticsearch import Elasticsearch

class Result:
    def __init__(self,entry, score_weight = 1.0,abstracts = False, bodies = False):
        self.abstracts = abstracts
        self.bodies = bodies
        self.score = entry['_score'] * score_weight
        self.paper_id = entry['_source']['paper_id']
        self.title = entry['_source']['metadata']['title']
        self.abstract = ''
        self.body = ''
        if 'abstract' in entry['_source']:
            for abstract_dict in entry['_source']['abstract']:
                for item in abstract_dict:
                    if item == 'text':
                        self.abstract += ' ' + abstract_dict['text']
        for body_dict in entry['_source']['body_text']:
            for item in body_dict:
                if item == 'text':
                    self.body += ' ' + body_dict['text']
    def add_score(self, score, score_weight):
        self.score += score * score_weight
    def __str__(self):
        ret_string = '\n-----------------------NEW PAPER----------------------\n\tPAPER ID: %s\n\tSCORE: %f\n\tTITLE: %s\n' % (self.paper_id, self.score,  self.title)
        if self.abstracts:
            ret_string += '\tABSTRACT: %s\n' % (self.abstract)
        if self.bodies:
            ret_string += '\tBODY: %s\n' % (self.body)
        return ret_string

class ResultParser:
    def __init__(self,abstracts = False, bodies = False):
        self.abstracts = abstracts
        self.bodies = bodies
        self.parsed_items = 0
    def parse(self,result_dict):
        parsed_results = []
        total = result_dict['hits']['total']['value']
        for item in result_dict['hits']['hits']:
            r = Result(item,abstracts = self.abstracts,bodies = self.bodies)
            parsed_results.append(r)
        print("TOTAL RESULTS: %d" % total)
        return parsed_results

custom=[' Covid-19 coronavirus origin SARS-CoV-2 virus SARS-CoV  SARS bat china Wuhan ',#1
        ' Covid-19 coronavirus SARS-CoV-2 viability virus different weather climate conditions \
        transmission of stability of SARS coronavirus low temperature humidity environment ',#2
       'Covid-19 coronavirus SARS-CoV-2 virus SARS-CoV  immunity cross protection', #3
       '  Covid-19 coronavirus virus triggering imbalance immune response too much inflammation lungs oxygen \
       severe pneumonia cytokines lining intestines  myocarditis acute myocardial infarction arrhythmia ^0.5', #4
        ' Covid-19 coronavirus  drugs active against SARS-CoV SARS-CoV-2 EIDD-2801 animal studies bind  spike proteins ',  #5
        ' Covid-19 rapid testing  viral genetic material (Rapid Test Cassette) recombinant antigens Swab chromatographic \
        immunoassay detection  Coronavirus seroconverters human plasma serum antigen nasal throat',  #6
        ' Coronavirus  Covid-19 serological tests detection  detect antibodies spikes, lateral flow assay enzyme-linked \
         immunosorbent assay ELISA  plastic plates coated lab-made proteins match surface virus plasma donors', #7
         ' Coronavirus  Covid-19 (lack of complete testing) underreporting true number infections deaths significant margin Suspected deaths versus \
         confirmed cases died hospital  without symptoms entirely asymptomatic cases  (reproductive number) ', #8
         ' Coronavirus  Covid-19  Canada community spread peaked expanding eligibility testing ', #9
        ' coronavirus Covid-19  social distancing slows spreading of virus decreasing  social distancing factor ρ  \
        self-quarantine isolation (lack of complete testing)  Stay (6 feet) meters (Stay out) groups (crowded places)' ,#10
        ' coronavirus COVID-19 guidelines prioritizing patients infected  (respiratory waiting area) patients 65 years age older symptoms ', #11
 '  coronavirus COVID-19  self-quarantine 14 days keeping people infected isolation (at home) hospital special personal protective equipment ', #12
 ' coronavirus COVID-19  contact contaminated surfaces transmit virus (aerosol transmission) respiratory \
 (virus-laden mucus) 6-foot distance (1.5 meter) transmissibility' ,#13

 ' coronavirus COVID-19   number proportion super spreaders contact tracing infectious  (not common) disproportionately infects 10 (or more) ' , #14
 " coronavirus COVID-19    (virus survival) suspended droplets (5 micrometers) aerosols half-hour lives longest plastic steel (72 hours) lower (much higher) humidity ", #15
' coronavirus COVID-19  hours days (72 hours) surfaces countertops and doorknobs Metal Wood Plastics Stainless steel  Cardboard   ', #16
 ' coronavirus COVID-19  clinical trial (Solidarity trial) (RNA polymerase inhibitor) protease inhibitors Gilead Remdesivir Lopinavir plus ritonavir combination hydroxychloroquine chloroquine Lopinavir Ritonavir CONVALESCENT PLASMA  \
(RECOVERY trial)  (Antiviral agents) (Anti-inflammatory agents) SNG001 tocilizumab \
mrna-1273 Moderna Favipiravir ', #17
 ' coronavirus COVID-19   Surgical masks N95 respirators reserved health care worker medical-grade makeshift', #18

' coronavirus COVID-19   Alcohol-based hand sanitisers alcohol (between 60%) 95% and isopropyl alcohol ethanol (ethyl alcohol) n-propanol destroys (envelope protein)  surrounds ', #19
'coronavirus COVID-19 angiotensin converting enzyme 2 ACE2 receptors risk patients taking medications ACE SARS-CoV-2  (anti-ACE-2 antibodies) (S protein)\
TMPRSS2 ibuprofen thiazolidinediones ', #20

 ' coronavirus COVID COVID-19 mortality morbidity fatalities underlying chronic conditions  diabetes hypertension obesity blood group (blood group A) \
 (death count) populous countries  men worse symptoms (probability of dying) older people  XX females (I.C.U.) ICU ', #21

 ' coronavirus COVID-19   arythmia side effects acute fulminant myocarditis heart muscle starved oxygen elevated levels of cardiac troponin (viral myocarditis) \
 cytokines local inflammatory response trigger a heart attack ' ,#22


 ' coronavirus COVID-19 hypertension angiotensin converting enzyme 2 ACE2 receptors upregulation (ACE2 polymorphisms) carotid arteriosclerosis stenosis CAS \
 increased expression   facilitate infection', #23


 ' coronavirus COVID-19  angiotensin converting enzyme 2 ACE2 Expression of ACE2 substantially increased patients type 1 or type 2 diabetes treated with \
 (ACE inhibitors) ACE2 polymorphisms antihypertensive calcium channel blockers advised' ,#24
'coronavirus COVID-19 biomarkers (B cell) (T cell) epitopes spike (S protein) nucleocapsid (N protein) detection IgM IgG antibodies SARSCoV-2 serum plasma (EDTA or citrate)\
 blood specimens and venipuncture (Sequential Organ Failure Assessment) SOFA score d-dimer (1 μg mL) lower lymphocyte evated levels of Interleukin 6 (IL-6) \
        high-sensitivity (troponin I) concentrations (marker of heart attack) ', #25
' coronavirus COVID-19  early symptoms (2-14) days exposure virus Fever  Cough \
 (Shortness of breath) (difficulty breathing) Chills shaking (Muscle pain) Headache (Sore throat) (loss of taste) (loss of smell) HYPOSMIA', #26

 ' coronavirus COVID-19  asymptomatic (no symptoms) (mild symptoms)  (no antibodies) silent spreaders test positive' ,#27

' coronavirus COVID-19  Hydroxychloroquine chloroquine Inhibit SARS-CoV-2 transmission alkalinisation intracellular phagolysosome \
limitations (small cohort) opatients  non-randomised (side effects) Hypoglycemia biventricular hypertrophy ', #28

 'coronavirus COVID-19  protein-protein interaction (inhibition of viral entry) (inhibition of viral replication) modulation Host immune response  \
 (S protein)-induced fusion inhibitor S1 DPP4 interactions inhibit the viral entry NAAE prohibit ACE2 mediated cell-cell fusion  imatinib Bcr-Abl Tyrosine kinase \
 inhibitor MERS-CoV SARS-CoV  Chlorpromazine (MoA inhibitor) ', #29

 ' coronavirus COVID-19  inhibits  viral RNA polymerases clinical improvement benefit activity adverse events increased  \
 hepatic enzymes diarrhea rash (renal impairment) hypotension randomized placebo-controlled trials remdesivir RNA Synthesis Inhibitors Treatment SARS-CoV-2 '  #30


]


def sum_score(query):
    return '''

    {
    "query": {
        "bool": {
          "should": [
              {
                    "nested" : {
                        "path" : "metadata",
                        "query" : {
                            "query_string" : {
                                "query" : "''' + query + '''",
                                "fields" : [ "metadata.title"]
                            }
                        }
                    }

              },
              {
                    "nested" : {
                        "path" : "body_text",
                        "query" : {
                            "query_string" : {
                                "query" : "''' + query + '''",
                                "fields" : [ "body_text.text"]
                            }
                        }
                    }

               },
               {
                   "nested" : {
                        "path" : "abstract",
                        "query" : {
                            "query_string" : {
                                "query" : "''' + query + '''",
                                "fields" : [ "abstract.text"]
                            }
                        }
                    }
                }
          ]
        }
    }
    }
    '''


def get_query_result(query_type, query_no):
    return es.search(index="treccovid", body=sum_score(query_type[query_no - 1]), size=10)

es = Elasticsearch(hosts=[{'host': '0.0.0.0', 'port': 9200}])
results_parser = ResultParser(abstracts = True, bodies = False)

query = {
	'size' : 10000,
	'query' : { 'match_all' : {} }
}


results = get_query_result(custom, 30)
for result in results_parser.parse(results):
    print(result)
