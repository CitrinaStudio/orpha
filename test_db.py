import inside

#inside.db.crt()
#inside.db.Shops.create(coor_hash="sdfsdf", name="asdasd", detail="asfasf")
print(inside.db.Players.select().get().name)
print(dict(inside.db.Players.select().get()))