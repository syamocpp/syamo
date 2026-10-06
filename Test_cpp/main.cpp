//
//  main.cpp
//  Test_cpp
//
//  Created by Mithu on 09/08/26.
//

#include <iostream>
#include <string.h>

using namespace std;

void reverseString(std::string &str)
{
    int left =0;
    int right = str.size()-1;
    while(left<right)
    {
        std::swap(str[left], str[right]);
        left++;
        right--;
    }
    
    //return;
    
}
int containerWithMaxwater(vector<int>&water)
{
    int left = 0;
    int right = water.size()-1;
    int result = 0;
    while(left<right)
    {
        int width = right - left;
        result = max(result, width * min(water[left], water[right]));
        
        if(water[left]<water[right])
        {
            left++;
        }
        else{
            right --;
        }
    }
    return result;
}

int printsumofArray(vector<int> arr)
{
    int sum =0;
    for(auto a:arr)
    {
        sum+=a;
    }
    return sum;
}
bool AnagramStrings(std::string first, std::string second)
{
    std::vector<int>freq(26,0);
    for(auto x:first)
    {
        freq[x-'a']++;
        
    }
    for(auto x:second)
    {
        freq[x-'a']--;
    }
    for(auto x:freq)
    {
     if(x!=0)
     {
         return false;
     }
    }
    return true;
}
vector<string>sortStrings(vector<string>&stringsVec)
{
    vector<string>sorted;
    sort(stringsVec.begin(), stringsVec.end());
    sorted= stringsVec;
    
    return sorted;
    
}
char firstNonRepeat(string str)
{
    unordered_map<char, int>firstChar;
    for(auto c:str)
    {
        firstChar[c]++;
    }
    for(auto ch:str)
    {
        if(firstChar[ch]==1)
        {
            return ch;
        }
    }
    return 'n';
}
#include <queue>

int kthLarget(vector<int>&kerry, int k)
{
    if (k>kerry.size())
    {
        return 0;
    }
    priority_queue<int, vector<int>, greater<int>>pq;
    for(int krr:kerry)
    {
        pq.push(krr);
        if(pq.size()>k)
            pq.pop();
    }
    
    return pq.top();
}
vector<int>topKfrequent(vector<int>&arr, int k)
{
    unordered_map<int, int>freq;
    for(int ar:arr)
    {
        freq[ar]++;
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>maxHeap;
    
    for(auto&[count, num]:freq)
    {
        maxHeap.push({count , num});
        if(maxHeap.size()>k)
        {
            maxHeap.pop();
        }
    
    }
    vector<int>result;
    while(!maxHeap.empty())
    {
        result.push_back(maxHeap.top().second);
        maxHeap.pop();
    }
    
    return result;
}
int rainWater(vector<int>&ht)
{
    int left = 0;
    int right = ht.size()-1;
    int leftMax = 0;
    int rightMax =0;
    int water =0;
    while(left<right)
    {
        if(ht[left]<ht[right])
        {
            if(leftMax<ht[left])
            {
                leftMax = ht[left];
            }else{
                water+= leftMax-ht[left];
            }
            left++;
        }else{
            if(rightMax<ht[right])
            {
                rightMax = ht[right];
                
            }else{
                water+= rightMax-ht[right];
            }
            right--;
        }
    }
    return water;
    
}

int subArraySumeK(vector<int>&arrK, int k)
{
    int cuont = 0;
    int currentSum = 0;
    unordered_map<int, int>prefixCount;
    prefixCount[0]=1;
    
    return sum;
    
}



int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    std::string str = "lmaystrstrmy";
    std::string anag="strmy";
    cout<<firstNonRepeat(str);
    //reverseString(str);
    //bool Anagram = AnagramStrings(str, anag);
    //std::cout<<Anagram<<std::endl;
    /*vector<string>strings1= {"hello", "how", "are", "you"};
    sortStrings(strings1);
    for(auto str:strings1)
    {
        cout<<str<<endl;
    }*/
    
    return EXIT_SUCCESS;
}
08045849434
