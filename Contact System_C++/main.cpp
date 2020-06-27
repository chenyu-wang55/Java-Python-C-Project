//
//Programer:Chenyu Wang 
//
//  main.cpp
//  CS331_HW03
//  Brief Description: Random cantact information in contactfactory class can be add and remove to contactlist class. User can get the origial contact information and one category mailaddress information and one category phone number
//
//  Created by Chenyu Wang on 10/29/19.
//  Last modifiction date on 11/14/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#include <QStringList>
#include <QTextStream>
#include "contactfactory.h"
#include <QCoreApplication>

void createRandomContacts(ContactList& cl, int n=10){
    static ContactFactory cf;
    for (int i=0;i<n;++i){
        cf>>cl;
    }
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    QTextStream cout(stdout);
    ContactList cl;
    createRandomContacts(cl, 10);
    
    QString s;
    for(int i=0;i<cl.size();i++){
        Contact c=cl.at(i);
        s=c.toString();
        cout<<s.toStdString().data()<<endl;
    }
    
    cout<<"category 1"<<endl;
    QStringList l=cl.getPhoneList(1);
    for(int i=0;i<l.size();i++){
        s=l.at(i);
        cout<<s.toStdString().data()<<endl;
    }
    
    cout<<"category 2"<<endl;
    QStringList list=cl.getMailingList(2);
    for (int i=0; i<list.size();i++){
        s=list.at(i);
        cout<<s.toStdString().data()<<endl;
    }
    
    return 0;
}
