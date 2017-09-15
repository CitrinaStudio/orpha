"""Database for orpha project"""

import peewee as pw

import header

database = pw.SqliteDatabase(header.PATH_DATA_DB)


class BaseModel(pw.Model):
    """Base class for all models"""
    coor_hash = pw.TextField(unique=True, primary_key=True)

    class Meta:
        database = database


class Players(BaseModel):
    """Class represents players"""

    name = pw.TextField(unique=True)
    age = pw.IntegerField()
    player_class = pw.TextField()
    coordinate = pw.TextField()
    player_hash = pw.TextField(unique=True, primary_key=True)
    hp = pw.IntegerField()
    mp = pw.IntegerField()
    stright = pw.IntegerField()
    dex = pw.IntegerField()
    con = pw.IntegerField()
    inte = pw.IntegerField()
    wis = pw.IntegerField()
    cha = pw.IntegerField()


class Lands(BaseModel):
    name = pw.PrimaryKeyField(unique=True, primary_key=True)


class Bars(BaseModel):
    name = pw.TextField(unique=True)
    detail = pw.TextField()


class Homes(BaseModel):
    detail = pw.TextField()


class Rivers(BaseModel):
    name = pw.TextField(unique=True)
    detail = pw.TextField()


class Shops(BaseModel):
    name = pw.TextField(unique=True)
    detail = pw.TextField()


class Mountains(BaseModel):
    detail = pw.TextField()


class Caves(BaseModel):
    detail = pw.TextField()


class Fields(BaseModel):
    detail = pw.TextField()


class Forests(BaseModel):
    detail = pw.TextField()


class Villages(BaseModel):
    detail = pw.TextField()
    name = pw.TextField(unique=True)


def crt():
    database.create_tables([Players, Lands, Bars, Homes, Rivers, Shops,
                            Mountains, Caves, Fields, Forests, Villages])
