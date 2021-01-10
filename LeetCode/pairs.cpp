/*
    10 20 20 10 10 30 50 10 20
    
    SET:
    10 : 4
    20 : 3
    30 : 1
    50 : 1
    
    int pair: 3
    
    PSEUDOCODE:
    - map <pair<int, int> PairCount;
    - map <pair<int, int>::iterator itr;
    - int pairs = 0;
 
 PUT IN VALUES INTO MAP
    for i in ar.size:
        itr = map.find(ar[i])
        if itr: increment second by 1
        else: add ar[i] and set second to 1
        
OBTAIN THE COUNT
    for itr in map:
        pairs = pairs + (itr->second/2);
    */

//CREATE EMPTY MAP
map <int , int> pairCount;
map <int, int>::iterator itr;
int pairs = 0;

//BASE CASE
if (ar.size() == 0) return 0;

 //PUT IN VALUES INTO MAP
for(int i=0; i<ar.size(); i++){
    itr = pairCount.find(ar[i]);
    
    if(itr != pairCount.end()) itr->second++;
    else {
        pairCount.insert(pair<int, int>(ar[i], 1));
    }
}

// for(itr = pairCount.begin(); itr != pairCount.end(); itr++){
//     cout<<itr->first<<" "<<itr->second<<endl;
// }

//OBTAIN THE COUNT
for(itr = pairCount.begin(); itr != pairCount.end(); itr++){
    pairs += (itr->second)/2;
}

// cout<<"pairs: "<<pairs<<endl;
return pairs;
