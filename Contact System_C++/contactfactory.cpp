//
//  contactfactory.cpp
//  CS331_HW03
//
//  Created by Chenyu Wang on 10/29/19.
//  Copyright © 2019 chenyu wang. All rights reserved.
//

#include "contactfactory.h"

ContactFactory::ContactFactory()
{
    QString s;
    QString firstname[10]={"Chenyu","Jason","Jack","Arraon","Xiao","Ben","Lucy","Mark","Viv","Jhon"};
    for(int i=0;i<10;i++){
        s="firstName: "+firstname[i];
        firstNameL.append(s);
    }
   
    QString lastname[10]={"Wang","Song","Qian","Sun","Li","Zhou","Wu","Xu","Xi","Jia"};
    for(int i=0;i<10;i++){
        s="LastName: "+lastname[i];
        lastNameL.append(s);
    }
    
    QString city[10]={"Malden","Boston","Qunicy","Revere","DC","Allston","New York","Beijing","Shanghai","Austin"};
       for(int i=0;i<10;i++){
           s="city: "+city[i];
           cityL.append(s);
       }
   
    for(int i=1;i<=50;i++){
        s=QString::number(i)+"street";
        streetL.append(s);
        s="zipCode"+QString::number(i);
        zipCodeL.append(s);
        s="phoneNumber"+QString::number(i);
        phoneNumberL.append(s);
    }
    srand(time(0));
}
 
void ContactFactory::operator>>(ContactList& cl){
    Contact c;
    c.firstName=firstNameL.at(rand()%10);
    c.lastName=lastNameL.at(rand()%10);
    c.street=streetL.at(rand()%50);
    c.city=cityL.at(rand()%10);
    QString s="";
    for (int i=0;i<5;i++){
        s=s+QString::number(rand()%10);
    }
    c.zipCode=s;
    s="";
    for (int i=0;i<10;i++){
        s=s+QString::number(rand()%10);
    }
    c.phoneNumber=s;
    c.category=rand()%3;
    cl.add(c);

}
