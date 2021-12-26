from sqlalchemy import Column, Integer, String, Table, ForeignKey, UniqueConstraint
from sqlalchemy.orm import relationship
from Base import Base

friendship = Table(
    'friendships', Base.metadata,
    Column('person_id', Integer, ForeignKey('person.id'), index=True),
    Column('friend_id', Integer, ForeignKey('person.id')),
    UniqueConstraint('person_id', 'friend_id', name='unique_friendships'))


class Person(Base):
    __tablename__ = 'person'

    id = Column(Integer, primary_key=True, autoincrement=True, unique=True)
    first_name = Column(String)
    last_name = Column(String)
    address = relationship('Address', uselist=False, back_populates='person')
    emails = relationship('Email', back_populates='person')
    phone_numbers = relationship('Phone', back_populates='person')
    friends = relationship('Person',
                           secondary=friendship,
                           primaryjoin=id == friendship.c.person_id,
                           secondaryjoin=id == friendship.c.friend_id)

    def __repr__(self):
        return "%s %s, lives in %s %s/%s %s, %s\n" \
               "Emails: %s\n" \
               "Phone numbers: %s\n" \
               "Friends: %s" % (
                   self.first_name,
                   self.last_name,
                   self.address.street,
                   self.address.house_number,
                   self.address.door_number,
                   self.address.city,
                   self.address.country,
                   self.emails,
                   self.phone_numbers,
                   self.friends)
