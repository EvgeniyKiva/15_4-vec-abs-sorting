#include <iostream>
#include <vector>

int main() {
    std::vector <int> vec {-100,-50, -5, 1, 10, 15};
    std::vector <int> module (vec.size(),0);

    for(int i=0; i<vec.size(); i++){
        module[i]= abs(vec[i]);
    }
    for (int i=0; i<vec.size(); i++){
        for (int j=0; j<vec.size()-i-1; j++){
            if (module[j]>module[j+1]){
                int temp = module [j];
                module[j]=module[j+1];
                module[j+1]=temp;
                temp = vec [j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
            }
        }
    }
    for (int i=0; i<vec.size(); i++){
        std::cout << vec[i] << " ";
    }
}
