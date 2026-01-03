#include <vector>
#include <iostream>
using namespace std;

enum TileType {
    EMPTY,
    GRASS,
    ROCK,
    TREE,
    HOUSE,
    CRAFTING_TABLE
};

int main() {
    const int WIDTH = 10;
    const int HEIGHT = 10;

    vector<vector<TileType>> world(HEIGHT, vector<TileType>(WIDTH, GRASS));

    world[2][3] = TREE;
    world[5][5] = ROCK;

    // Print world (G=Grass, T=Tree, R=Rock)
    for(int y=0; y<HEIGHT; y++){
        for(int x=0; x<WIDTH; x++){
            char c = ' ';
            switch(world[y][x]){
                case GRASS: c='G'; break;
                case TREE: c='T'; break;
                case ROCK: c='R'; break;
                case HOUSE: c='H'; break;
                case CRAFTING_TABLE: c='C'; break;
                default: c='.';
            }
            std::cout << c << " ";
        }
        std::cout << "\n";
    }
}
