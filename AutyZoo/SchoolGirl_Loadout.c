class SchoolGirl_Loadout
{

	EntityAI itemTop;   // shirt slot inventory
	EntityAI itemBot;   // pants
	EntityAI itemBck;   // backpack
	EntityAI itemWst;   // belt
	EntityAI itemEnt;
	ItemBase itemBs;


	autoptr TStringArray starting_tops = 
	{
		"MiniDress_Pink",
		"MiniDress_PinkChecker",
		"MiniDress_RedChecker",
		"MiniDress_WhiteChecker",
		"MiniDress_GreenChecker",
		"MiniDress_BrownChecker",
		"MiniDress_BlueChecker",
		"MiniDress_BlueWithDots"};
	
	autoptr TStringArray  starting_bottoms = 
	{
		"ShortJeans_Black",
		"ShortJeans_Blue",
		"ShortJeans_Brown",
		"ShortJeans_Darkblue",
		"ShortJeans_Green",
		"ShortJeans_Red"};
	
	autoptr TStringArray starting_bags = 
	{
		"ChildBag_Red",
		"ChildBag_Green",
		"ChildBag_Blue"};
	
	autoptr TStringArray starting_shoes = 
	{
		"Ballerinas_Yellow",
		"Ballerinas_White",
		"Ballerinas_Blue",
		"Ballerinas_Red"};


	void dress_player(PlayerBase player){
		int  top_idx = Math.RandomIntInclusive(0, starting_tops.Count() - 1);
		int  bot_idx = Math.RandomIntInclusive(0, starting_bottoms.Count() - 1);
		int  bag_idx = Math.RandomIntInclusive(0, starting_bags.Count() - 1);
		int  sho_idx = Math.RandomIntInclusive(0, starting_shoes.Count() - 1);



		player.GetInventory().CreateInInventory(starting_tops[top_idx]);
		player.GetInventory().CreateInInventory(starting_bottoms[bot_idx]);
		player.GetInventory().CreateInInventory(starting_bags[bag_idx] );
		player.GetInventory().CreateInInventory(starting_shoes[sho_idx]);

		itemTop = player.FindAttachmentBySlotName("Body");
		itemBot = player.FindAttachmentBySlotName("Legs");
		itemBck = player.FindAttachmentBySlotName("Back");
		itemWst = player.FindAttachmentBySlotName("Hips");

		player.GetInventory().CreateInInventory("CivilianBelt");


		itemEnt = itemTop.GetInventory().CreateInInventory("BandageDressing");
		itemEnt = itemTop.GetInventory().CreateInInventory("PowderedMilk");
		itemEnt = itemTop.GetInventory().CreateInInventory("Marmalade");
		itemEnt = itemBot.GetInventory().CreateInInventory("KitchenKnife");
		itemEnt = itemBck.GetInventory().CreateInInventory("thermos_mung");		
	}
};
