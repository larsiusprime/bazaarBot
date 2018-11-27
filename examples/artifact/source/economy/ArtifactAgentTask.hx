package economy;

/**
 * ...
 * @author 
 */
@:enum abstract ArtifactAgentTask(Int) from Int to Int
{
	var NONE = 0;
	var BUY_TICKET = 1;
	var BUY_TICKET_FODDER = 1;
	var RECYCLE_CARDS = 2;
}