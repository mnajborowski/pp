from sqlalchemy import Column, Integer, String, ForeignKey
from sqlalchemy.orm import relationship
from Base import Base


class Phone(Base):
    __tablename__ = 'phone'

    id = Column(Integer, primary_key=True, autoincrement=True, unique=True)
    phone_number = Column(String, nullable=False)

    person_id = Column(Integer, ForeignKey('person.id'))
    person = relationship('Person', back_populates='phone_numbers')

    def __repr__(self):
        return self.phone_number
