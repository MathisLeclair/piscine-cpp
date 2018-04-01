#ifndef GAMEENTITIES_CLASS_HPP
# define GAMEENTITIES_CLASS_HPP

class AGameEntites {
    public:
        void virtual takeDamage(int) = 0;
    //protected:
        bool touch(gameEntities obj){}
        void nextFrame();

        //10
        //int _wait;

    Form f;
    projectile p;
};

class Enemy : {

}

class Form {
    int n[l][w] = {};
    int color;

    bool collide(Form f);
}

class Display {
        set(x,y);
        [32][32];
};

class Game {
    display;
    background;
    player;
    []ennemys;
    []projectiles;
    []background_items;
    render() {
        //0: move background
        bg_items += background.nextFrame();
        for display(bg_items->nextFrame());

        //1: move enemy
        for each this.projectiles.append( ennemys->nextframe() )//[2,3,l,w,'*']

        //2: move user (from input)
        player.nextframe( display.getInput() );

        //3: check collision and display
        for each enemys -> if enemy.touch(player) ? display_game_over() else display(enemy)

        //4: projectiles
        for each projectilses -> if projectile.touch(player) -> display_game_over()..
    }

    loop(){
        while (1){
            get
            wait 1 frame;
            this.render();
        }
    }
};

#endif
