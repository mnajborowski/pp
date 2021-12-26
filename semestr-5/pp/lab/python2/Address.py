from sqlalchemy import Column, Integer, String, ForeignKey
from sqlalchemy.orm import relationship
from Base import Base


class Address(Base):
    __tablename__ = 'address'

    id = Column(Integer, primary_key=True, autoincrement=True, unique=True)
    street = Column(String)
    house_number = Column(String)
    door_number = Column(String)
    city = Column(String)
    country = Column(String)

    person_id = Column(Integer, ForeignKey('person.id'))
    person = relationship('Person', back_populates='address')

    def __repr__(self):
        return "%s %s/%s %s, %s" % (
            self.street,
            self.house_number,
            self.door_number,
            self.city,
            self.country
        )
