#include "$CurrentDir:\\AutyZoo\\Loadout.c"
#include "$CurrentDir:\\AutyZoo\\SchoolGirl_Loadout.c"
#include "$CurrentDir:\\AutyZoo\\FreedomFighter_Loadout.c"
#include "$CurrentDir:\\AutyZoo\\Drifter_Loadout.c"
#include "$CurrentDir:\\AutyZoo\\Karen_Loadout.c"



class Auty
{
    void First_Spawn(PlayerBase player)
    {

    	autoptr Loadout basic_loadout;
    	autoptr SchoolGirl_Loadout girl_loadout;
    	autoptr FreedomFighter_Loadout ff_loadout;
    	autoptr Drifter_Loadout drifter_loadout;
      autoptr Karen_Loadout karen_loadout;


    	basic_loadout = new Loadout; // creates a new instance of 
	    girl_loadout = new SchoolGirl_Loadout;
	    ff_loadout = new FreedomFighter_Loadout;
	    drifter_loadout = new Drifter_Loadout;
      karen_loadout = new Karen_Loadout;


		int  random_loadout = Math.RandomIntInclusive(0,4);


        player.RemoveAllItems();

		//set full
		player.GetStatWater().Set(1500);
        player.GetStatEnergy().Set(1500);


        switch(random_loadout) {
   			case 0 :
   			  basic_loadout.dress_player(player);
   			  break;
   			case 1 :
          girl_loadout.dress_player(player);
          break;
        case 2 :
          ff_loadout.dress_player(player);
          break;
        case 3 :
          drifter_loadout.dress_player(player);
          break;
        case 4 :
          karen_loadout.dress_player(player);
          break;


        };

		



          /*
          karen  - skirt and blouse
          nurse  - 
          firefighter -
          police 
          construction worker
          t shirt and shorts
          parka
          drifter with poncho
          thug leather jacket
          ninja
          
          */



    }
};