var food = query_inventory("food");
var tools = query_inventory("tools");
var ore = query_inventory("ore");
	
var has_food = food >= 1;
var has_tools = tools >= 1;
var has_ore = ore >= 1;

if(has_food && has_ore){	
	if(has_tools){		
		//convert all ore into metal, consume 1 food, break tools with 10% chance
		produce(agent,"metal",ore);
		consume(agent,"ore",ore);
		consume(agent,"food",1);
		consume(agent,"tools",1,0.1);
	}else{
		//convert up to 2 ore into metal, consume 1 food
		var max = query_inventory("ore");
		if(max > 2){ max = 2;}
		produce(agent,"metal", max);
		consume(agent,"ore", max);
		consume(agent,"food",1);
	}	
}else{
	//fined $2 for being idle
	consume(agent,"money",2);
	if(!has_food && inventory_is_full()){		
		make_room_for(agent,"food",2);
	}
}
