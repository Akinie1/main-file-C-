class Welcome {
private: 
char response;
string username;
string password;
char verify;


public: 
Welcome(){
    cout<<"Welcome to the School Management System\n Are you a user or a School Administrator ?  y / n "<<endl;
   this->response = getch();
   requireEnter();

   checkResponse(&response);
}

void checkResponse(char* response);
void contentSchoolAdmin();
void userSection();
void requireEnter();
void verifyResponse();
void restart();

}; // End of the class


// require Enter first before you can proceed.
void Welcome::requireEnter()
{
    cout << "Click Enter to continue... " << endl;
    while(getch() != 13);
}


// check reponse method
void Welcome::checkResponse(char* response){
  if(*response == 'y'){


system("cls");

this->verifyResponse();



  }else{
    *response == 'n'; //You can clean it.
 cout<<"Welcome to the user section"<<endl;
  userSection();

  }

}

// contentSchoolAdmin function
void Welcome::contentSchoolAdmin(){
// In this function you will be able to view records, input, update  and remove data.

requireEnter();
}

void Welcome::restart(){
Welcome welcome1;
}

// userSection function
void Welcome::userSection(){
  cout<<"section where user applies for school and her course"<<endl;

//   if enter is not pressed, stay still
}

void Welcome::verifyResponse(){
cout<<"Go back to change your response, press 'Esc' or press 'Enter' to continue"<<endl;
this->verify = getch();
// while(getch() == 27 || getch() == 13);
if(this->verify == 27){

system("cls");
restart();

}else if(this->verify == 13){
    cout<<"Okay, Please continue"<<endl;


cout<<"Please enter credentials , Admin user :  " ; cin>>this->username;
cout<<"Enter the password for your username : " ; cin>>this->password;

system("cls");
if(this->username == "admin" && this->password == "admin12345"){
 
    contentSchoolAdmin();

}else{
    cout<<"You are unauthorized to login to School Management as a School Admin"<<endl;
}


}


}