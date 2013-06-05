package com.leveluplabs.bazaarbot.example;
import com.leveluplabs.bazaarbot.BazaarBot;
import com.leveluplabs.bazaarbot.MarketReport;
import flash.display.Sprite;
import flash.text.TextField;
import flash.text.TextFormatAlign;

/**
 * ...
 * @author 
 */
class MarketDisplay extends Sprite
{
	private var txt_list_commodity:TextField;
	private var txt_list_commodity_prices:TextField;
	private var txt_list_commodity_trades:TextField;
	private var txt_list_commodity_asks:TextField;
	private var txt_list_commodity_bids:TextField;
		
	private var txt_list_agent:TextField;
	private var txt_list_agent_count:TextField;
	private var txt_list_agent_profit:TextField;
	private var txt_list_agent_money:TextField;
	
	private var arr_txt_list_inventory:Array<TextField>;
	
	public function new(W:Float,H:Float) 
	{
		super();		
		graphics.lineStyle(1, 0);
		graphics.beginFill(0xEEEEEE);
		graphics.drawRect(0, 0, W, H);
		graphics.endFill();
		
		setup();
	}	
	
	public function update(report:MarketReport):Void {
		txt_list_commodity.text = report.str_list_commodity;
		txt_list_commodity_prices.text = report.str_list_commodity_prices;
		txt_list_commodity_trades.text = report.str_list_commodity_trades;
		txt_list_commodity_asks.text = report.str_list_commodity_asks;
		txt_list_commodity_bids.text = report.str_list_commodity_bids;
		
		txt_list_agent.text = report.str_list_agent;
		txt_list_agent_count.text = report.str_list_agent_count;
		txt_list_agent_profit.text = report.str_list_agent_profit;		
		txt_list_agent_money.text = report.str_list_agent_money;
		
		if (arr_txt_list_inventory == null) {
			setupTxtInventory(report);
		}
		for (i in 0...report.arr_str_list_inventory.length) {			
			arr_txt_list_inventory[i].text = report.arr_str_list_inventory[i];
		}
	}
	
	private function setupTxtInventory(report:MarketReport):Void {
		arr_txt_list_inventory = new Array<TextField>();
		var last_txt:TextField = txt_list_agent_money;
		for (str in report.arr_str_list_inventory) {
			var txt:TextField = new TextField();
			txt.width = width * 0.05;
			txt.height = height * 0.25;
			txt.x = last_txt.x + last_txt.width;
			txt.y = 0;
			addChild(txt);			
			arr_txt_list_inventory.push(txt);
			last_txt = txt;
		}
	}
	
	private function setup():Void {
		txt_list_commodity = new TextField();
		txt_list_commodity.width = width * 0.10;
		txt_list_commodity.height = height * 0.25;
		txt_list_commodity.x = 0;
		txt_list_commodity.y = 0;
		
		txt_list_commodity_prices = new TextField();
		txt_list_commodity_prices.width = width * 0.075;
		txt_list_commodity_prices.height = height * 0.25;
		txt_list_commodity_prices.x = txt_list_commodity.x+txt_list_commodity.width;
		txt_list_commodity_prices.y = 0;		
		
		txt_list_commodity_trades = new TextField();
		txt_list_commodity_trades.width = width * 0.075;
		txt_list_commodity_trades.height = height * 0.25;
		txt_list_commodity_trades.x = txt_list_commodity_prices.x+txt_list_commodity_prices.width;
		txt_list_commodity_trades.y = 0;		
				
		txt_list_commodity_asks = new TextField();
		txt_list_commodity_asks.width = width * 0.075;
		txt_list_commodity_asks.height = height * 0.25;
		txt_list_commodity_asks.x = txt_list_commodity_trades.x+txt_list_commodity_trades.width;
		txt_list_commodity_asks.y = 0;		
		
		txt_list_commodity_bids = new TextField();
		txt_list_commodity_bids.width = width * 0.075;
		txt_list_commodity_bids.height = height * 0.25;
		txt_list_commodity_bids.x = txt_list_commodity_asks.x+txt_list_commodity_asks.width;
		txt_list_commodity_bids.y = 0;	
		
		txt_list_agent = new TextField();
		txt_list_agent.width = width * 0.10;
		txt_list_agent.height = height * 0.25;
		txt_list_agent.x = txt_list_commodity_bids.x + txt_list_commodity_bids.width + 10;
		txt_list_agent.y = 0;
		
		txt_list_agent_count = new TextField();
		txt_list_agent_count.width = width * 0.075;
		txt_list_agent_count.height = height * 0.25;
		txt_list_agent_count.x = txt_list_agent.x + txt_list_agent.width + 5;
		txt_list_agent_count.y = 0;
		
		txt_list_agent_profit = new TextField();
		txt_list_agent_profit.width = width * 0.075;
		txt_list_agent_profit.height = height * 0.25;
		txt_list_agent_profit.x = txt_list_agent_count.x + txt_list_agent_count.width + 5;
		txt_list_agent_profit.y = 0;
		
		txt_list_agent_money = new TextField();
		txt_list_agent_money.width = width * 0.075;
		txt_list_agent_money.height = height * 0.25;
		txt_list_agent_money.x = txt_list_agent_profit.x + txt_list_agent_profit.width + 5;
		txt_list_agent_money.y = 0;
		
		txt_list_commodity_prices.defaultTextFormat.align = TextFormatAlign.RIGHT;
		txt_list_agent_profit.defaultTextFormat.align = TextFormatAlign.RIGHT;
		
		addChild(txt_list_commodity);
		addChild(txt_list_commodity_prices);		
		addChild(txt_list_commodity_trades);		
		addChild(txt_list_commodity_asks);		
		addChild(txt_list_commodity_bids);		
		
		addChild(txt_list_agent);
		addChild(txt_list_agent_count);
		addChild(txt_list_agent_profit);
		addChild(txt_list_agent_money);
	}
}