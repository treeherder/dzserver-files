class Drifter_Loadout
{

	EntityAI itemTop;   // shirt slot inventory
	EntityAI itemBot;   // pants
	EntityAI itemBck;   // backpack
	EntityAI itemWst;   // belt
	EntityAI itemEnt;
	ItemBase itemBs;


	autoptr TStringArray starting_tops = 
	{
		"Military_Sweater",
		"Military_Sweater_Red",
		"Military_Sweater_Blue",
		"Military_Sweater_Green",
		"Military_Sweater_Black",
		"Military_Sweater_White",

	};
	
	autoptr TStringArray  starting_bottoms = 
	{
		"Kneepads_Jeans_Black",
		"Jeans_Black",
		"Jeans_Blue",
		"Jeans_BlueDark",
		"Jeans_Brown",
		"Jeans_Green",
		"Jeans_Grey"
	};
	
	autoptr TStringArray starting_bags = 
	{

	};
	
	autoptr TStringArray starting_shoes = 
	{
		"CombatBoots_Black",
		"CombatBoots_Brown",
		"High_Knee_Sneakers_Black",
		"High_Knee_Sneakers",
		"CombatBoots_Grey"
	};	

	autoptr TStringArray starting_hats = 
	{
		"Poncho_Red_Checkered",
		"Poncho_Blue_Checkered",
		"Poncho_Yellow_Checkered",
		"Poncho_Brown",
		"Poncho_Green",
		"Poncho_Black",
		"Poncho_Red",
		"Poncho_White",
		"Poncho_BlackAndWhite",
		"Poncho_BlackAndWhite2"
	};

	autoptr TStringArray starting_gloves = 
	{
		"Fingerless_Gloves_Brown",
		"Fingerless_Gloves_Wool_Grey",
		"Fingerless_Gloves_Wool"

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

		player.GetInventory().CreateInInventory("CivilianBelt");
		EntityAI a_weapon = player.GetInventory().CreateInInventory("Scythe_Mung");
	

	}
};