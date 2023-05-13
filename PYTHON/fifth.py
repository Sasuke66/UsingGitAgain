import pickle
with open ('StudentRecord.dat','ab') as Myfile:
    srecord={"SROLL":sroll,"SNAME":sname,"SPERC":sperc,"SREMARKS":sremark}
    pickle.dump(srecord,Myfile)

with open ('StudentRecord.dat','rb') as Myfile:
    print("\n-------DISPLAY STUDENTS DETAILS--------")
    print("\nRoll No.",' ','Name','\t',end='')
    print('Percetage',' ','Remarks')
    while True:
        try:
            rec=pickle.load(Myfile)
            print(' ',rec['SROLL'],'\t ' ,rec['SNAME'],'\t ',end='')
            print(rec['SPERC'],'\t ',rec['SREMARKS'])
        except EOFError:
            break
                
n=int(input("How many records you want to create :"))
for ctr in range(n):
    sroll=int(input("Enter Roll No: "))
    sname=input("Enter Name: ")
    sperc=float(input("Enter Percentage: "))
    sremark=input("Enter Remark: ")
    Writerecord(sroll,sname,sperc,sremark)

with open ('StudentRecord.dat','rb') as Myfile:
    newRecord=[]
    while True:
        try:
            rec=pickle.load(Myfile)
            newRecord.append(rec)
        except EOFError:
            break
        found=1
        for i in range(len(newRecord)):
            if newRecord[i]['SROLL']==roll:
                name=input("Enter Name: ")
                perc=float(input("Enter Percentage: "))
                remark=input("Enter Remark: ")
                newRecord[i]['SNAME']=name
                newRecord[i]['SPERC']=perc
                newRecord[i]['SREMARKS']=remark
                found =1
            else:
                found=0
                if found==0:
                    print("Record not found")
                    with open ('StudentRecord.dat','wb') as Myfile:
                        for j in newRecord:
                            pickle.dump(j,Myfile)

while True:
    print('\nYour Choices are: ')
    print('1.Insert Records')
    print('2.Display Records')
    print('3.Update Records')
    print('0.Exit (Enter 0 to exit)')
    ch=int(input('Enter Your Choice: '))
    if ch==1:
        Input()
    elif ch==2:
        Readrecord()
        
import pickle
with open ('StudentRecord.dat','ab') as Myfile:
    srecord={"SROLL":sroll,"SNAME":sname,"SPERC":sperc,"SREMARKS":sremark}
    pickle.dump(srecord,Myfile)
    with open ('StudentRecord.dat','rb') as Myfile:
        print("\n-------DISPLAY STUDENTS DETAILS--------")
        print("\nRoll No.",' ','Name','\t',end='')
        print('Percetage',' ','Remarks')
        while True:
            try:
                rec=pickle.load(Myfile)
                print(' ',rec['SROLL'],'\t ' ,rec['SNAME'],'\t ',end='')
                print(rec['SPERC'],'\t ',rec['SREMARKS'])
            except EOFError:
                break
                
    n=int(input("How many records you want to create :"))
    for ctr in range(n):
        sroll=int(input("Enter Roll No: "))
        sname=input("Enter Name: ")
        sperc=float(input("Enter Percentage: "))
        sremark=input("Enter Remark: ")
        Writerecord(sroll,sname,sperc,sremark)

    with open ('StudentRecord.dat','rb') as Myfile:
        newRecord=[]
        while True:
            try:
                rec=pickle.load(Myfile)
                newRecord.append(rec)
            except EOFError:
                break
            found=1
            for i in range(len(newRecord)):
                if newRecord[i]['SROLL']==roll:
                    name=input("Enter Name: ")
                    perc=float(input("Enter Percentage: "))
                    remark=input("Enter Remark: ")
                    newRecord[i]['SNAME']=name
                    newRecord[i]['SPERC']=perc
                    newRecord[i]['SREMARKS']=remark
                    found =1
                else:
                    found=0
                    if found==0:
                        print("Record not found")
                        with open ('StudentRecord.dat','wb') as Myfile:
                            for j in newRecord:
                                pickle.dump(j,Myfile)

while True:
    print('\nYour Choices are: ')
    print('1.Insert Records')
    print('2.Display Records')
    print('3.Update Records')
    print('0.Exit (Enter 0 to exit)')
    ch=int(input('Enter Your Choice: '))
    if ch==1:
        Input()
    elif ch==2:
        Readrecord()
    elif ch==3:
        r =int(input("Enter a Rollno to be update: "))
    else:
        break




