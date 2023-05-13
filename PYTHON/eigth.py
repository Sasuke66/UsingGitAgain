import csv
al=["id", "password"]
a=[["userid1", "passwordl"],
   ["userid2", "password2"],
   ["userid3", "password3"],
   ["userid4","passwozd4"],
   ["userid5", "passwords"]]
b=input("Enter username: ")
myfile=open("sample.csv", "w+", newline=("\r\n"))
myfile1=csv.writer(myfile)
myfile1.writerow(al)
myfile1.writerows(a)
myfile.seek(0)
myfile2=csv.reader(myfile)
for i in myfile2:
    if i[0]==b:
        print("The password is", i[1])
        myfile.close()
