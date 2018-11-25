package;

import bazaarbot.Market;
import bazaarbot.utils.MarketReport;
import flash.display.Sprite;
import flash.text.TextField;
import flash.text.TextFormatAlign;

/**
 * ...
 * @author
 */
class MarketDisplay extends Sprite
{
	private var txtListGood:TextField;
	private var txtListGoodPrices:TextField;
	private var txtListGoodTrades:TextField;
	private var txtListGoodAsks:TextField;
	private var txtListGoodBids:TextField;

	private var txtListAgent:TextField;
	private var txtListAgentCount:TextField;
	private var txtListAgentProfit:TextField;
	private var txtListAgentMoney:TextField;

	private var arrTxtListInventory:Array<TextField>;

	public function new(W:Float,H:Float)
	{
		super();
		graphics.lineStyle(1, 0);
		graphics.beginFill(0xEEEEEE);
		graphics.drawRect(0, 0, W, H);
		graphics.endFill();

		setup();
	}

	public function update(report:MarketReport):Void
	{
		txtListGood.text = report.strListGood;
		txtListGoodPrices.text = report.strListGoodPrices;
		txtListGoodTrades.text = report.strListGoodTrades;
		txtListGoodAsks.text = report.strListGoodAsks;
		txtListGoodBids.text = report.strListGoodBids;

		txtListAgent.text = report.strListAgent;
		txtListAgentCount.text = report.strListAgentCount;
		txtListAgentProfit.text = report.strListAgentProfit;
		txtListAgentMoney.text = report.strListAgentMoney;

		if (arrTxtListInventory == null)
		{
			setupTxtInventory(report);
		}
		for (i in 0...report.arrStrListInventory.length)
		{
			arrTxtListInventory[i].text = report.arrStrListInventory[i];
		}
	}

	private function setupTxtInventory(report:MarketReport):Void
	{
		arrTxtListInventory = new Array<TextField>();
		var last_txt:TextField = txtListAgentMoney;
		for (str in report.arrStrListInventory)
		{
			var txt:TextField = new TextField();
			txt.width = width * 0.05;
			txt.height = height * 0.25;
			txt.x = last_txt.x + last_txt.width;
			txt.y = 0;
			addChild(txt);
			arrTxtListInventory.push(txt);
			last_txt = txt;
		}
	}

	private function setup():Void
	{
		txtListGood = new TextField();
		txtListGood.width = width * 0.10;
		txtListGood.height = height * 0.25;
		txtListGood.x = 0;
		txtListGood.y = 0;

		txtListGoodPrices = new TextField();
		txtListGoodPrices.width = width * 0.075;
		txtListGoodPrices.height = height * 0.25;
		txtListGoodPrices.x = txtListGood.x+txtListGood.width;
		txtListGoodPrices.y = 0;

		txtListGoodTrades = new TextField();
		txtListGoodTrades.width = width * 0.075;
		txtListGoodTrades.height = height * 0.25;
		txtListGoodTrades.x = txtListGoodPrices.x+txtListGoodPrices.width;
		txtListGoodTrades.y = 0;

		txtListGoodAsks = new TextField();
		txtListGoodAsks.width = width * 0.075;
		txtListGoodAsks.height = height * 0.25;
		txtListGoodAsks.x = txtListGoodTrades.x+txtListGoodTrades.width;
		txtListGoodAsks.y = 0;

		txtListGoodBids = new TextField();
		txtListGoodBids.width = width * 0.075;
		txtListGoodBids.height = height * 0.25;
		txtListGoodBids.x = txtListGoodAsks.x+txtListGoodAsks.width;
		txtListGoodBids.y = 0;

		txtListAgent = new TextField();
		txtListAgent.width = width * 0.10;
		txtListAgent.height = height * 0.25;
		txtListAgent.x = txtListGoodBids.x + txtListGoodBids.width + 10;
		txtListAgent.y = 0;

		txtListAgentCount = new TextField();
		txtListAgentCount.width = width * 0.075;
		txtListAgentCount.height = height * 0.25;
		txtListAgentCount.x = txtListAgent.x + txtListAgent.width + 5;
		txtListAgentCount.y = 0;

		txtListAgentProfit = new TextField();
		txtListAgentProfit.width = width * 0.075;
		txtListAgentProfit.height = height * 0.25;
		txtListAgentProfit.x = txtListAgentCount.x + txtListAgentCount.width + 5;
		txtListAgentProfit.y = 0;

		txtListAgentMoney = new TextField();
		txtListAgentMoney.width = width * 0.075;
		txtListAgentMoney.height = height * 0.25;
		txtListAgentMoney.x = txtListAgentProfit.x + txtListAgentProfit.width + 5;
		txtListAgentMoney.y = 0;

		txtListGoodPrices.defaultTextFormat.align = TextFormatAlign.RIGHT;
		txtListAgentProfit.defaultTextFormat.align = TextFormatAlign.RIGHT;

		addChild(txtListGood);
		addChild(txtListGoodPrices);
		addChild(txtListGoodTrades);
		addChild(txtListGoodAsks);
		addChild(txtListGoodBids);

		addChild(txtListAgent);
		addChild(txtListAgentCount);
		addChild(txtListAgentProfit);
		addChild(txtListAgentMoney);
	}
}
