import pandas as pd
from tabulate import tabulate

pd.set_option('display.max_columns', None)

df = pd.read_csv('Criteo_Conversion_Search/CriteoSearchData', '\t',
                 names=['Sale', 'SalesAmountInEuro', 'time_delay_for_conversion', 'click_timestamp', 'nb_clicks_1week',
                        'product_price', 'product_age_group', 'device_type', 'audience_id', 'product_gender',
                        'product_brand', 'product_category1', 'product_category2', 'product_category3',
                        'product_category4', 'product_category5', 'product_category6', 'product_category7',
                        'product_country', 'product_id', 'product_title',
                        'partner_id', 'user_id'], nrows=10)
df['click_timestamp'] = pd.to_datetime(df['click_timestamp'], unit='s').dt.strftime('%Y-%m-%d')



# print(df.dtypes)
print(tabulate(df, headers='keys', tablefmt='psql'))
