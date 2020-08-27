
/// Codeforces: 670C - Cinema 
/// Category : sorting.



#include<bits/stdc++.h>

using namespace std;

const int mx=200001;

struct movie
{
    int id;
    int audio_freq;
    int subtitle_freq;
};


bool comp(movie a,movie b)
{
    if(a.audio_freq==b.audio_freq)
    {
        return (a.subtitle_freq<b.subtitle_freq);
    }
    else return (a.audio_freq<b.audio_freq);
}

vector<movie>movies;
vector<int>audio;
vector<int>subtitle;
map<int,int>mpp;

int main()

{
   int scient,m,idd;
   cin>>scient;
   for(int i=1;i<=scient;i++) {cin>>idd;mpp[idd]++;}
   cin>>m;
   for(int i=0;i<m;i++)
   {
       cin>>idd;
       audio.push_back(idd);
   }
   for(int i=0;i<m;i++)
   {
       cin>>idd;
       subtitle.push_back(idd);
   }

       for(int i=0;i<m;i++)
       {
       movie mo;
       mo.id=i+1;/// movie id.
       mo.audio_freq=mpp[audio[i]];
       mo.subtitle_freq=mpp[subtitle[i]];
       movies.push_back(mo);
       }

       sort(movies.rbegin(),movies.rend(),comp);
       cout<<movies[0].id<<endl;

   return 0;
}
