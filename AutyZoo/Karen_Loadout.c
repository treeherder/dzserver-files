class Karen_Loadout
// blouse, skirt, pistol
{

	EntityAI itemTop;   // shirt slot inventory
	EntityAI itemBot;   // pants
	EntityAI itemBck;   // backpack
	EntityAI itemWst;   // belt
	EntityAI itemEnt;
	ItemBase itemBs;


	autoptr TStringArray starting_tops = 
	{
		"Blouse_Blue",
		"Blouse_Green",
		"Blouse_Violet",
		"ManSuit_White",
		"WomanSuit_Beige",
		"WomanSuit_Beige",
		"WomanSuit_Brown",		
		"WomanSuit_White"
	};
	
	autoptr TStringArray  starting_bottoms = 
	{
		"Skirt_Blue",
		"Skirt_Red",
		"Skirt_White",
		"Skirt_Yellow",
		"SlacksPants_White",
		"SlacksPants_Blue",
		"SlacksPants_Brown",
		"SlacksPants_DarkGrey"
	};
	
	autoptr TStringArray starting_bags = 
	{

	};
	
	autoptr TStringArray starting_shoes = 
	{
		"DressShoes_Beige",
		"DressShoes_Black",
		"DressShoes_Brown",
		"DressShoes_Sunburst",
		"DressShoes_White"
	};	

	autoptr TStringArray starting_hats = 
	{

	};

	autoptr TStringArray starting_gloves = 
	{
		
	};

	autoptr TStringArray starting_masks = 
	{
	};



	void dress_player(PlayerBase player){
		int  top_idx = Math.RandomIntInclusive(0, starting_tops.Count() - 1);
		int  bot_idx = Math.RandomIntInclusive(0, starting_bottoms.Count() - 1);
		int  bag_idx = Math.RandomIntInclusive(0, starting_bags.Count() - 1);
		int  sho_idx = Math.RandomIntInclusive(0, starting_shoes.Count() - 1);
		int  hat_idx = Math.RandomIntInclusive(0, starting_hats.Count() - 1);
		int  glv_idx = Math.RandomIntInclusive(0, starting_gloves.Count() - 1);
		int  msk_idx = Math.RandomIntInclusive(0, starting_masks.Count() - 1);

		player.GetInventory().CreateInInventory(starting_tops[top_idx]);
		player.GetInventory().CreateInInventory(starting_bottoms[bot_idx]);
		player.GetInventory().CreateInInventory(starting_bags[bag_idx] );
		player.GetInventory().CreateInInventory(starting_shoes[sho_idx]);
		player.GetInventory().CreateInInventory(starting_hats[hat_idx]);
		player.GetInventory().CreateInInventory(starting_gloves[glv_idx]);
		player.GetInventory().CreateInInventory(starting_masks[msk_idx]);





		itemTop = player.FindAttachmentBySlotName("Body");
		itemBot = player.FindAttachmentBySlotName("Legs");
		itemBck = player.FindAttachmentBySlotName("Back");
		itemWst = player.FindAttachmentBySlotName("Hips");

		player.GetInventory().CreateInInventory("fannypack_black_mung");

		itemEnt = itemBot.GetInventory().CreateInInventory("Magnum");
		itemEnt = itemBot.GetInventory().CreateInInventory("AmmoBox_357_20Rnd");

	}
};