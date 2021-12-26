from sqlalchemy import Column, Integer, String, ForeignKey
from sqlalchemy.orm import relationship
from Base import Base


class Email(Base):
    __tablename__ = 'email'

    id = Column(Integer, primary_key=True, autoincrement=True, unique=True)
    email = Column(String, nullable=False)

    person_id = Column(Integer, ForeignKey('person.id'))
    person = relationship('Person', back_populates='emails')

    def __repr__(self):
        return self.email
