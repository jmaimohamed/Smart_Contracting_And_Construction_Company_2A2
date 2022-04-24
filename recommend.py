import cx_Oracle
# only qt part left
connection = cx_Oracle.connect(user="amrou", password="esprit",
                               dsn="localhost/xe",
                               encoding="UTF-8")

cur = connection.cursor()
list = []
list_partenaires = {}
with open('../Smart_Contracting_And_Construction_Company_2A2/id_chantier.txt', 'r') as file:
    x = file.read().rstrip()
for row in cur.execute("select * from AFFECTATION where id_c=:id", id=x):
    list.append(row[0])

# check if list is empty
if not list:
    print("list is empty")
    for row in cur.execute("select * from PARTENAIRES where disponibilite_p=1"):
        list_partenaires[row[0]] = 1
    print(list_partenaires)
    for key in list_partenaires:
        for row in cur.execute("select id_p from affectation where id_p=:id", id=key):
            if cur.rowcount != 0:
                list_partenaires[key] += 0.5
    result = []
    print(list_partenaires)
    for key, value in list_partenaires.items():
        #look for highest value
        if value == max(list_partenaires.values()):
            result.append(key)
    
    if(result.__len__()>1):
        f = open("../Smart_Contracting_And_Construction_Company_2A2/recommend.txt", "w")
        f.write("none")
        f.close()
    else:
        f = open("../Smart_Contracting_And_Construction_Company_2A2/recommend.txt", "w")
        f.write(str(result[0]))
        f.close()

else:
    print("list is not empty")
    exit()
