import pickle
def insert():
    roll = int(input("Enter Roll No : "))
    name = input("Enter Student Name :")
    marks = float(input("Enter Marks(in percentage) :"))
    with open("studentdb.dat","ab") as rinsert:
        data = {"Roll":roll,"Name":name,"Marks":marks} 
        pickle.dump(data,rinsert)
        
def display():
    with open("studentdb.dat","rb") as dataopen:
        print("--------Student Records-------")
        print("Roll No."," ",'Name'," ", "Marks")
        print("------------------------------")
        while True:
            try:
                cur = pickle.load(dataopen)
                print(cur["Roll"],"\t ",cur["Name"]," ",cur["Marks"])
                print("------------------------------")
            except EOFError:
                break
            
def search(r):
    with open("studentdb.dat","rb") as dataopen:
        while True:
            try:
                cur = pickle.load(dataopen)
                if cur["Roll"] == r :
                    print("It is present!")
                    break
            except EOFError:
                print("It is NOT present!")
                break
            
def delete():
    f = open('studentdb.dat','rb')
    temp = []
    while True:
        try:
            rec = pickle.load(f)
            temp.append(rec)
        except EOFError:
            break
        f.close()
        r=int(input("Enter Roll to delete:"))
        f = open('studentdb.dat','wb')
        for i in temp:
            if i['Roll']==r:
                continue
            pickle.dump(i,f)
            f.close() 
            
def update():
    f = open('studentdb.dat','rb')
    temp = []
    while True:
        try:
            rec = pickle.load(f)
            temp.append(rec)
        except EOFError:
            break
        f.close()
        r=int(input("Enter Roll to update:"))
        m=int(input("Enter new Marks :"))
        for i in range (len(temp)):
            if temp[i]['Roll']==r:
                temp[i]['Marks'] = m
                f = open('studentdb.dat','wb')
                for i in temp:
                    pickle.dump(i,f)
                    f.close() 
                    while True:
                        print('\nYour Choices are: ')
                        print('1.Insert Records')
                        print('2.Dispaly Records') 
                        print('3.Search Record')
                        print('4.Delete Record')
                        print('5.Update Marks')
                        print('0.Exit (Enter 0 to exit)')
                        ch=int(input('Enter Your Choice: '))
                        if ch==1:
                            insert()
                        elif ch==2:
                            display()
                        elif ch==3:
                            r =int(input("Enter a Rollno to be search: "))
                            search(r)
                        elif ch==4:
                            delete()
                        elif ch==5:
                            update()
                        else:
                            break