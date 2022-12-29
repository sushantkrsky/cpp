                      // VIRTUAL FUNCTION AND POINTER EXAMPLE //
# include <iostream>
# include <cstring>
using namespace std;

class cwh{
    protected:
    string title;
    float rating;
    public:
    cwh(string s, float r){
        title = s; 
        rating = r;
    }
    virtual void display(){}
};

class cwhvideo : public cwh{
    float videolength;
    public:
    cwhvideo(string s, float r, float vl) : cwh(s,r){
        videolength = vl;
    }
    void display(){
        cout<<"This is an amazing video with title "<<title<<endl;
        cout<<"This video has rating "<<rating<<" out of 5 star"<<endl;
        cout<<"Length of this video is "<<videolength<<" minutes"<<endl;
    }
};

class cwhtext : public cwh{
    int words;
    public:
    cwhtext(string s, float r, int wc) : cwh(s,r){
        words = wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"This rating of this text tutorial is "<<rating<<" out of 5 star"<<endl;
        cout<<"No of words in this text tutorial is "<<words<<" words"<<endl;
    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    //For code with harry video:-
    title = "django tutorial";
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(title, rating, vlen);
    djvideo.display();

    //For code with harry texts:-
    title = "django tutorial text";
    words = 433;
    rating = 4.19;
    cwhtext djtext(title, rating, words);
    djtext.display();

    cout<<"Second part :- "<<endl;
    cwh* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    tuts[0]->display();
    tuts[1]->display();


    return 0;
}

/*
RULES FOR VIRTUAL FUNCTIONS :-
  1. They cannot be static
  2. They are accessed by object pointer
  3. Virtual functions can be friend of another class
  4. A virtual function in base class might not be used
  5. If a virtual function is defined in a base class,there is no necessity
     of redifining it in  a derived class
  6. But in pure virtual function, it is required to define in derived class bcz
     that which is present in base class will not run bcz its pure.
*/
