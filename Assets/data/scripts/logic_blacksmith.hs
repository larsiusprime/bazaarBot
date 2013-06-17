var food = query_inventory("food");
var metal = query_inventory("metal");

var has_food = food >= 1;
var has_metal = metal >= 1;

if(has_food && has_metal){
	//convert all metal into tools
	produce(agent,"tools",metal);
	consume(agent,"metal",metal);		
}else{
	//fined $2 for being idle
	consume(agent,"money",2);
	if(!has_food && inventory_is_full()){
		make_room_for(agent,"food",2);
	}
}