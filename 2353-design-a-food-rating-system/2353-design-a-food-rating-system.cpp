class FoodRatings {
        struct cmp {
 //use const for return type and parameters for both
 bool operator() (const pair<int,string> &a,const pair<int,string> &b) const {        
       if(a.first==b.first) return a.second<b.second;
       return a.first>b.first;
 }
 };

public:
        map<string,set<pair<int,string>,cmp>>cusionToFood;
          unordered_map<string,int>rate;
         unordered_map<string,string>foodToCusisin;

    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
    
        for(int i =0;i<foods.size();i++)
        {
       cusionToFood[cuisines[i]].insert(make_pair(ratings[i], foods[i]));

            rate[foods[i]]=ratings[i];
            foodToCusisin[foods[i]]=cuisines[i];
                          
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuision = foodToCusisin[food];
         int prevrating = rate[food];
        rate[food]=newRating;
        cusionToFood[cuision].erase({prevrating,food});
 cusionToFood[cuision].insert({newRating,food});
        
    }
    
    string highestRated(string cuisine) {

         return  cusionToFood[cuisine].begin()->second;
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */