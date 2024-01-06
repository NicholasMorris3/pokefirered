CinnabarIsland_Mart_MapScripts::
	.byte 0

CinnabarIsland_Mart_EventScript_Woman::
	msgbox CinnabarIsland_Mart_Text_DontTheyHaveXAttack, MSGBOX_NPC
	end

CinnabarIsland_Mart_EventScript_Scientist::
	msgbox CinnabarIsland_Mart_Text_ExtraItemsNeverHurt, MSGBOX_NPC
	end

CinnabarIsland_Mart_EventScript_Clerk::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	message Text_MayIHelpYou
	waitmessage
	pokemart CinnabarIsland_Mart_Items
	msgbox Text_PleaseComeAgain
	release
	end

	.align 2
CinnabarIsland_Mart_Items::
	.2byte ITEM_ULTRA_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_REVIVE
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_WHITE_HERB
	.2byte ITEM_SOUL_DEW
	.2byte ITEM_DRAGON_SCALE
	.2byte ITEM_DRAGON_FANG
	.2byte ITEM_HARD_STONE
	.2byte ITEM_RARE_CANDY
	.2byte ITEM_CARBOS
	.2byte ITEM_PROTEIN
	.2byte ITEM_ZINC
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_SITRUS_BERRY
	.2byte ITEM_NONE
	release
	end
