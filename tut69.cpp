                   // ABSTRACT BASE CLASS AND PURE VIRTUAL FUNCTION //
/* 
--Pure virtual function is written to make a abstract base class.
--Abstract Base class is a base class from which derived class needed to be made
  bcz its function is a pure virtual function which will not run even when derived
  function is absent.
--Abstract base class is the one which consist of atleast one pure virtual function
*/
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
    virtual void display()=0; //Do nothing function -->Pure Virtual Function
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