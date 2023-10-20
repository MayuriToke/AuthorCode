# include<iostream>
class Author{

private:
	int authorId;
    String Bookname;
    int noOfbooks;
    int total sold;
};
public: Author()
{
    this->authorId=1;
    this->Bookname="abc";
    this->noOfbooks=4;
    this-> total_sold=15;
}
public: Author(	int authorId,string Bookname,int noOfbooks,int total_sold)
{
    this->authorId=authorId;
    this->Bookname=Bookname;
    this->noOfbooks=noOfbooks;
    this-> total_sold=total_sold;
}
void funAvaiCopy()
{
	int copies;
	copies=noOfbooks-total_sold;
	cout<<"number of copies"<<copies<<endl;
}
	
	
	

	
    	
