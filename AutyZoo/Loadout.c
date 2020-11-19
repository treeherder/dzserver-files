class Loadout
{

	EntityAI itemTop;   // shirt slot inventory
	EntityAI itemBot;   // pants
	EntityAI itemBck;   // backpack
	EntityAI itemWst;   // belt
	EntityAI itemEnt;
	ItemBase itemBs;


	autoptr TStringArray starting_tops = 
	{
		"DenimJacket",
		"Shirt_BlueCheck",
		"Shirt_BlueCheckBright",
		"Shirt_GreenCheck",
		"Shirt_RedCheck",
		"Shirt_WhiteCheck",
		"Shirt_PlaneBlack"};
	
	autoptr TStringArray  starting_bottoms = 
	{
		"Jeans_Blue",
		"Jeans_Brown",
		"Jeans_Black",
		"Jeans_Green",
		"Jeans_Grey",
		"Jeans_BlueDark"};
	
	autoptr TStringArray starting_bags = 
	{
		"jaakari_simple_black_mung",
		"jaakari_simple_brown_mung",
		"jaakari_simple_camo_mung"};
	
	autoptr TStringArray starting_shoes = 
	{
		"Wellies_Black",
		"Wellies_Brown",
		"Wellies_Green",
		"Wellies_Grey"};


    autoptr TStringArray starting_hats = 
	{
		 "CowboyHat_Brown",
		 "CowboyHat_black",
		 "CowboyHat_darkBrown",
		 "CowboyHat_green"};


	void dress_player(PlayerBase player){
		int  top_idx = Math.RandomIntInclusive(0, starting_tops.Count() - 1);
		int  bot_idx = Math.RandomIntInclusive(0, starting_bottoms.Count() - 1);
		int  bag_idx = Math.RandomIntInclusive(0, starting_bags.Count() - 1);
		int  sho_idx = Math.RandomIntInclusive(0, starting_shoes.Count() - 1);
		int  hat_idx = Math.RandomIntInclusive(0, starting_hats.Count() - 1);


		player.GetInventory().CreateInInventory(starting_tops[top_idx]);
		player.GetInventory().CreateInInventory(starting_bottoms[bot_idx]);
		player.GetInventory().CreateInInventory(starting_bags[bag_idx]);
		player.GetInventory().CreateInInventory(starting_shoes[sho_idx]);
		player.GetInventory().CreateInInventory(starting_hats[hat_idx]);



		itemTop = player.FindAttachmentBySlotName("Body");
		itemBot = player.FindAttachmentBySlotName("Legs");
		itemBck = player.FindAttachmentBySlotName("Back");
		itemWst = player.FindAttachmentBySlotName("Hips");

		player.GetInventory().CreateInInventory("CivilianBelt");



		itemEnt = itemBot.GetInventory().CreateInInventory("KitchenKnife");
		itemEnt = itemTop.GetInventory().CreateInInventory("Matchbox");
		itemEnt = itemWst.GetInventory().CreateInInventory("Canteen");

    	EntityAI A_gun = player.GetHumanInventory().CreateInHands("Repeater");
     	EntityAI ammo = itemTop.GetInventory().CreateInInventory("Ammo_357");
    }
};
