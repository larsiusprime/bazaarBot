var wood = query_inventory("wood");
var tools = query_inventory("tools");

var has_wood = wood >= 1;
var has_tools = tools >= 1;

if(has_wood){
	if(has_tools){
		//produce 4 food, consume 1 wood, break tools with 10% chance
		produce(agent,"food",4,1);
		consume(agent,"wood",1,1);
		consume(agent,"tools",1,0.1);
	}else{
		//produce 2 food, consume 1 wood
		produce(agent,"food",2,1);
		consume(agent,"wood",1,1);
	}	
}else{
	//fined $2 for being idle
	consume(agent,"money",2);
}
