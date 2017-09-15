"""Database for orpha project"""

import peewee as pw

import header 

class BaseModel(pw.Model):
    """Base class for all models"""
    json_meta_obj = pw.TextField()
    id = pw.PrimaryKeyField(unique=True, primary_key=True)

    class Meta:
        database =  pw.SqliteDatabase(header.PATH_DATA_DB)

class Players(BaseModel):
    """Class represents players"""

    name = pw.TextField()
    age = pw.IntegerField()
    class = pw.TextField()
    coordinate = pw.IntegerField()
    hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    hp = pw.IntegerField()
    mp = pw.IntegerField()
    stright = pw.IntegerField()
    dex = pw.IntegerField()
    con = pw.IntegerField()
    inte = pw.IntegerField()
    wis = pw.IntegerField()
    cha = pw.IntegerField()

class Lands(BaseModel):
    name = pw.PrimaryKeyField(unique=True, primary_key=True))
    coor_hash = pw.TextField()

class Bars(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    name = pw.TextField()
    detail = pw.extField()

class Homes(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    detail = pw.extField()

class River(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    name = pw.TextField()
    detail = pw.TextField()

class Shop(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    name = pw.TextField()
    detail = pw.TextField()

class Mountains(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    detail = pw.TextField()

class Caves(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    detail = pw.TextField()

class Fields(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    detail = pw.TextField()

class Forests(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    detail = pw.TextField()

class Villages(BaseModel):
    coor_hash = pw.PrimaryKeyField(unique=True, primary_key=True)
    detail = pw.TextField()
    name = pw.TextField()
