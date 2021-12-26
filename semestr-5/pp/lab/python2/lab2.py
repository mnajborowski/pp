from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from Base import Base
from Person import Person
from Address import Address
from Email import Email
from Phone import Phone

engine = create_engine('sqlite:///people.db', echo=False)
Session = sessionmaker(bind=engine)
session = Session()
Base.metadata.create_all(engine)

if __name__ == '__main__':
    person1 = Person(
        first_name='Radoslav',
        last_name='Leszkievitch',
        address=Address(
            street='Polanka',
            house_number='10',
            door_number='15',
            city='Moscow',
            country='Russia'),
        emails=[
            Email(email='rl@gmail.com'),
            Email(email='radoslav.leszkievitch@gmail.com')],
        phone_numbers=[
            Phone(phone_number='123456789'),
            Phone(phone_number='987654321')]
    )
    person2 = Person(
        first_name='Adi',
        last_name='Glapek',
        address=Address(
            street='Rataje',
            house_number='1',
            door_number='2',
            city='Poznan',
            country='Poland'
        ),
        friends=[person1]
    )
    session.add(person1)
    session.add(person2)
    session.commit()
    print(session.query(Person).filter_by(first_name='Radoslav').one())
    print(session.query(Person).filter_by(first_name='Adi').one())
