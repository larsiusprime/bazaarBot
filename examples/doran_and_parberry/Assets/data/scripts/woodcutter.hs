var food = query_inventory("food");
var tools = query_inventory("tools");

var has_food = food >= 1;
var has_tools = tools >= 1;

if(has_food){
	if(has_tools){
		//produce 2 wood, consume 1 food, break tools with 10% chance
		produce(agent,"wood",2);
		consume(agent,"food",1);
		consume(agent,"tools",1,0.1);
	}else{
		//produce 1 wood, consume 1 food
		produce(agent,"wood",1);
		consume(agent,"food",1);
	}	
}else{
	//fined $2 for being idle
	consume(agent,"money",2);
	if(!has_food && inventory_is_full()){
		make_room_for(agent,"food",2);
	}
}
