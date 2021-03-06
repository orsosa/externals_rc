{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug 31 18:37:44 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-0.1,0.81875,0.9,1.13125);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1F *hframe__1 = new TH1F("hframe__1","EMC parametrization",1000,0,0.8);
   hframe__1->SetMinimum(0.85);
   hframe__1->SetMaximum(1.1);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hframe__1->SetLineColor(ci);
   hframe__1->GetXaxis()->SetLabelFont(42);
   hframe__1->GetXaxis()->SetLabelSize(0.035);
   hframe__1->GetXaxis()->SetTitleSize(0.035);
   hframe__1->GetXaxis()->SetTitleFont(42);
   hframe__1->GetYaxis()->SetLabelFont(42);
   hframe__1->GetYaxis()->SetLabelSize(0.035);
   hframe__1->GetYaxis()->SetTitleSize(0.035);
   hframe__1->GetYaxis()->SetTitleFont(42);
   hframe__1->GetZaxis()->SetLabelFont(42);
   hframe__1->GetZaxis()->SetLabelSize(0.035);
   hframe__1->GetZaxis()->SetTitleSize(0.035);
   hframe__1->GetZaxis()->SetTitleFont(42);
   hframe__1->Draw(" ");
   
   TPaveText *pt = new TPaveText(0.3097236,0.9341608,0.6902764,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("EMC parametrization");
   pt->Draw();
   
   TF1 *emc_C = new TF1("*emc_C",0.08,0.7,1);
    //The original function :  had originally been created by:
    //TF1 *emc_C = new TF1("emc_C",,0.08,0.7,1);
   emc_C->SetRange(0.08,0.7);
   emc_C->SetName("emc_C");
   emc_C->SetTitle("");
   emc_C->SetSavedPoint(0,1.014405);
   emc_C->SetSavedPoint(1,1.016576);
   emc_C->SetSavedPoint(2,1.018119);
   emc_C->SetSavedPoint(3,1.019135);
   emc_C->SetSavedPoint(4,1.019717);
   emc_C->SetSavedPoint(5,1.019945);
   emc_C->SetSavedPoint(6,1.019891);
   emc_C->SetSavedPoint(7,1.019616);
   emc_C->SetSavedPoint(8,1.019173);
   emc_C->SetSavedPoint(9,1.018608);
   emc_C->SetSavedPoint(10,1.017957);
   emc_C->SetSavedPoint(11,1.017252);
   emc_C->SetSavedPoint(12,1.016516);
   emc_C->SetSavedPoint(13,1.015769);
   emc_C->SetSavedPoint(14,1.015025);
   emc_C->SetSavedPoint(15,1.014295);
   emc_C->SetSavedPoint(16,1.013584);
   emc_C->SetSavedPoint(17,1.012898);
   emc_C->SetSavedPoint(18,1.012238);
   emc_C->SetSavedPoint(19,1.011602);
   emc_C->SetSavedPoint(20,1.010988);
   emc_C->SetSavedPoint(21,1.010391);
   emc_C->SetSavedPoint(22,1.009808);
   emc_C->SetSavedPoint(23,1.009231);
   emc_C->SetSavedPoint(24,1.008656);
   emc_C->SetSavedPoint(25,1.008074);
   emc_C->SetSavedPoint(26,1.007481);
   emc_C->SetSavedPoint(27,1.006868);
   emc_C->SetSavedPoint(28,1.006232);
   emc_C->SetSavedPoint(29,1.005564);
   emc_C->SetSavedPoint(30,1.00486);
   emc_C->SetSavedPoint(31,1.004116);
   emc_C->SetSavedPoint(32,1.003326);
   emc_C->SetSavedPoint(33,1.002488);
   emc_C->SetSavedPoint(34,1.001599);
   emc_C->SetSavedPoint(35,1.000656);
   emc_C->SetSavedPoint(36,0.99966);
   emc_C->SetSavedPoint(37,0.9986078);
   emc_C->SetSavedPoint(38,0.9975004);
   emc_C->SetSavedPoint(39,0.9963377);
   emc_C->SetSavedPoint(40,0.9951208);
   emc_C->SetSavedPoint(41,0.9938537);
   emc_C->SetSavedPoint(42,0.9925359);
   emc_C->SetSavedPoint(43,0.9911715);
   emc_C->SetSavedPoint(44,0.9897649);
   emc_C->SetSavedPoint(45,0.9883177);
   emc_C->SetSavedPoint(46,0.9868333);
   emc_C->SetSavedPoint(47,0.9853163);
   emc_C->SetSavedPoint(48,0.983768);
   emc_C->SetSavedPoint(49,0.9822004);
   emc_C->SetSavedPoint(50,0.980608);
   emc_C->SetSavedPoint(51,0.9789999);
   emc_C->SetSavedPoint(52,0.9773781);
   emc_C->SetSavedPoint(53,0.9757419);
   emc_C->SetSavedPoint(54,0.9741035);
   emc_C->SetSavedPoint(55,0.9724633);
   emc_C->SetSavedPoint(56,0.970823);
   emc_C->SetSavedPoint(57,0.9691824);
   emc_C->SetSavedPoint(58,0.9675413);
   emc_C->SetSavedPoint(59,0.9659109);
   emc_C->SetSavedPoint(60,0.9642819);
   emc_C->SetSavedPoint(61,0.9626663);
   emc_C->SetSavedPoint(62,0.9610565);
   emc_C->SetSavedPoint(63,0.9594507);
   emc_C->SetSavedPoint(64,0.9578475);
   emc_C->SetSavedPoint(65,0.9562559);
   emc_C->SetSavedPoint(66,0.9546677);
   emc_C->SetSavedPoint(67,0.9530847);
   emc_C->SetSavedPoint(68,0.9514968);
   emc_C->SetSavedPoint(69,0.9499296);
   emc_C->SetSavedPoint(70,0.9483248);
   emc_C->SetSavedPoint(71,0.9467344);
   emc_C->SetSavedPoint(72,0.9451488);
   emc_C->SetSavedPoint(73,0.9435458);
   emc_C->SetSavedPoint(74,0.9419092);
   emc_C->SetSavedPoint(75,0.9402741);
   emc_C->SetSavedPoint(76,0.9386212);
   emc_C->SetSavedPoint(77,0.9369426);
   emc_C->SetSavedPoint(78,0.9352508);
   emc_C->SetSavedPoint(79,0.9335437);
   emc_C->SetSavedPoint(80,0.9318015);
   emc_C->SetSavedPoint(81,0.9300513);
   emc_C->SetSavedPoint(82,0.9282779);
   emc_C->SetSavedPoint(83,0.9264863);
   emc_C->SetSavedPoint(84,0.9246862);
   emc_C->SetSavedPoint(85,0.9228543);
   emc_C->SetSavedPoint(86,0.9210291);
   emc_C->SetSavedPoint(87,0.9192312);
   emc_C->SetSavedPoint(88,0.9174127);
   emc_C->SetSavedPoint(89,0.9156171);
   emc_C->SetSavedPoint(90,0.9138468);
   emc_C->SetSavedPoint(91,0.9121227);
   emc_C->SetSavedPoint(92,0.9104506);
   emc_C->SetSavedPoint(93,0.9088606);
   emc_C->SetSavedPoint(94,0.9073741);
   emc_C->SetSavedPoint(95,0.9059053);
   emc_C->SetSavedPoint(96,0.9046277);
   emc_C->SetSavedPoint(97,0.9034846);
   emc_C->SetSavedPoint(98,0.9024964);
   emc_C->SetSavedPoint(99,0.9017299);
   emc_C->SetSavedPoint(100,0.9011646);
   emc_C->SetSavedPoint(101,0.08);
   emc_C->SetSavedPoint(102,0.7);
   emc_C->SetFillColor(19);
   emc_C->SetFillStyle(0);

   ci = TColor::GetColor("#0000ff");
   emc_C->SetLineColor(ci);
   emc_C->SetLineWidth(2);
   emc_C->GetXaxis()->SetLabelFont(42);
   emc_C->GetXaxis()->SetLabelSize(0.035);
   emc_C->GetXaxis()->SetTitleSize(0.035);
   emc_C->GetXaxis()->SetTitleFont(42);
   emc_C->GetYaxis()->SetLabelFont(42);
   emc_C->GetYaxis()->SetLabelSize(0.035);
   emc_C->GetYaxis()->SetTitleSize(0.035);
   emc_C->GetYaxis()->SetTitleFont(42);
   emc_C->SetParameter(0,12);
   emc_C->SetParError(0,0);
   emc_C->SetParLimits(0,0,0);
   emc_C->Draw("same");
   
   TF1 *emc_Fe = new TF1("*emc_Fe",0.08,0.7,1);
    //The original function :  had originally been created by:
    //TF1 *emc_Fe = new TF1("emc_Fe",,0.08,0.7,1);
   emc_Fe->SetRange(0.08,0.7);
   emc_Fe->SetName("emc_Fe");
   emc_Fe->SetTitle("");
   emc_Fe->SetSavedPoint(0,1.021294);
   emc_Fe->SetSavedPoint(1,1.02517);
   emc_Fe->SetSavedPoint(2,1.027969);
   emc_Fe->SetSavedPoint(3,1.029864);
   emc_Fe->SetSavedPoint(4,1.03101);
   emc_Fe->SetSavedPoint(5,1.031545);
   emc_Fe->SetSavedPoint(6,1.031588);
   emc_Fe->SetSavedPoint(7,1.031245);
   emc_Fe->SetSavedPoint(8,1.030607);
   emc_Fe->SetSavedPoint(9,1.02975);
   emc_Fe->SetSavedPoint(10,1.028736);
   emc_Fe->SetSavedPoint(11,1.027619);
   emc_Fe->SetSavedPoint(12,1.02644);
   emc_Fe->SetSavedPoint(13,1.025232);
   emc_Fe->SetSavedPoint(14,1.024019);
   emc_Fe->SetSavedPoint(15,1.022822);
   emc_Fe->SetSavedPoint(16,1.021649);
   emc_Fe->SetSavedPoint(17,1.02051);
   emc_Fe->SetSavedPoint(18,1.019406);
   emc_Fe->SetSavedPoint(19,1.018336);
   emc_Fe->SetSavedPoint(20,1.017298);
   emc_Fe->SetSavedPoint(21,1.016284);
   emc_Fe->SetSavedPoint(22,1.015288);
   emc_Fe->SetSavedPoint(23,1.014299);
   emc_Fe->SetSavedPoint(24,1.013309);
   emc_Fe->SetSavedPoint(25,1.012307);
   emc_Fe->SetSavedPoint(26,1.011283);
   emc_Fe->SetSavedPoint(27,1.010225);
   emc_Fe->SetSavedPoint(28,1.009128);
   emc_Fe->SetSavedPoint(29,1.007977);
   emc_Fe->SetSavedPoint(30,1.006766);
   emc_Fe->SetSavedPoint(31,1.005488);
   emc_Fe->SetSavedPoint(32,1.004136);
   emc_Fe->SetSavedPoint(33,1.002706);
   emc_Fe->SetSavedPoint(34,1.001191);
   emc_Fe->SetSavedPoint(35,0.9995908);
   emc_Fe->SetSavedPoint(36,0.9979029);
   emc_Fe->SetSavedPoint(37,0.996125);
   emc_Fe->SetSavedPoint(38,0.9942586);
   emc_Fe->SetSavedPoint(39,0.9923034);
   emc_Fe->SetSavedPoint(40,0.9902617);
   emc_Fe->SetSavedPoint(41,0.9881403);
   emc_Fe->SetSavedPoint(42,0.9859387);
   emc_Fe->SetSavedPoint(43,0.9836636);
   emc_Fe->SetSavedPoint(44,0.9813226);
   emc_Fe->SetSavedPoint(45,0.9789181);
   emc_Fe->SetSavedPoint(46,0.9764562);
   emc_Fe->SetSavedPoint(47,0.9739444);
   emc_Fe->SetSavedPoint(48,0.9713848);
   emc_Fe->SetSavedPoint(49,0.9687969);
   emc_Fe->SetSavedPoint(50,0.9661722);
   emc_Fe->SetSavedPoint(51,0.9635252);
   emc_Fe->SetSavedPoint(52,0.9608591);
   emc_Fe->SetSavedPoint(53,0.9581731);
   emc_Fe->SetSavedPoint(54,0.9554867);
   emc_Fe->SetSavedPoint(55,0.9528004);
   emc_Fe->SetSavedPoint(56,0.9501172);
   emc_Fe->SetSavedPoint(57,0.9474365);
   emc_Fe->SetSavedPoint(58,0.944758);
   emc_Fe->SetSavedPoint(59,0.9420997);
   emc_Fe->SetSavedPoint(60,0.9394466);
   emc_Fe->SetSavedPoint(61,0.936818);
   emc_Fe->SetSavedPoint(62,0.9342015);
   emc_Fe->SetSavedPoint(63,0.9315943);
   emc_Fe->SetSavedPoint(64,0.9289944);
   emc_Fe->SetSavedPoint(65,0.9264159);
   emc_Fe->SetSavedPoint(66,0.9238459);
   emc_Fe->SetSavedPoint(67,0.9212866);
   emc_Fe->SetSavedPoint(68,0.9187233);
   emc_Fe->SetSavedPoint(69,0.9161951);
   emc_Fe->SetSavedPoint(70,0.9136112);
   emc_Fe->SetSavedPoint(71,0.9110531);
   emc_Fe->SetSavedPoint(72,0.9085056);
   emc_Fe->SetSavedPoint(73,0.905934);
   emc_Fe->SetSavedPoint(74,0.9033133);
   emc_Fe->SetSavedPoint(75,0.9006985);
   emc_Fe->SetSavedPoint(76,0.8980592);
   emc_Fe->SetSavedPoint(77,0.8953835);
   emc_Fe->SetSavedPoint(78,0.892691);
   emc_Fe->SetSavedPoint(79,0.8899785);
   emc_Fe->SetSavedPoint(80,0.8872153);
   emc_Fe->SetSavedPoint(81,0.8844435);
   emc_Fe->SetSavedPoint(82,0.8816397);
   emc_Fe->SetSavedPoint(83,0.8788118);
   emc_Fe->SetSavedPoint(84,0.875975);
   emc_Fe->SetSavedPoint(85,0.8730932);
   emc_Fe->SetSavedPoint(86,0.8702258);
   emc_Fe->SetSavedPoint(87,0.8674042);
   emc_Fe->SetSavedPoint(88,0.8645551);
   emc_Fe->SetSavedPoint(89,0.8617451);
   emc_Fe->SetSavedPoint(90,0.8589774);
   emc_Fe->SetSavedPoint(91,0.8562838);
   emc_Fe->SetSavedPoint(92,0.8536731);
   emc_Fe->SetSavedPoint(93,0.8511903);
   emc_Fe->SetSavedPoint(94,0.8488675);
   emc_Fe->SetSavedPoint(95,0.8465742);
   emc_Fe->SetSavedPoint(96,0.844573);
   emc_Fe->SetSavedPoint(97,0.8427773);
   emc_Fe->SetSavedPoint(98,0.8412171);
   emc_Fe->SetSavedPoint(99,0.8399928);
   emc_Fe->SetSavedPoint(100,0.8390731);
   emc_Fe->SetSavedPoint(101,0.08);
   emc_Fe->SetSavedPoint(102,0.7);
   emc_Fe->SetFillColor(19);
   emc_Fe->SetFillStyle(0);

   ci = TColor::GetColor("#ff0000");
   emc_Fe->SetLineColor(ci);
   emc_Fe->SetLineWidth(2);
   emc_Fe->GetXaxis()->SetLabelFont(42);
   emc_Fe->GetXaxis()->SetLabelSize(0.035);
   emc_Fe->GetXaxis()->SetTitleSize(0.035);
   emc_Fe->GetXaxis()->SetTitleFont(42);
   emc_Fe->GetYaxis()->SetLabelFont(42);
   emc_Fe->GetYaxis()->SetLabelSize(0.035);
   emc_Fe->GetYaxis()->SetTitleSize(0.035);
   emc_Fe->GetYaxis()->SetTitleFont(42);
   emc_Fe->SetParameter(0,56);
   emc_Fe->SetParError(0,0);
   emc_Fe->SetParLimits(0,0,0);
   emc_Fe->Draw("same");
   
   TF1 *emc_Pb = new TF1("*emc_Pb",0.08,0.7,1);
    //The original function :  had originally been created by:
    //TF1 *emc_Pb = new TF1("emc_Pb",,0.08,0.7,1);
   emc_Pb->SetRange(0.08,0.7);
   emc_Pb->SetName("emc_Pb");
   emc_Pb->SetTitle("");
   emc_Pb->SetSavedPoint(0,1.0272);
   emc_Pb->SetSavedPoint(1,1.032547);
   emc_Pb->SetSavedPoint(2,1.036435);
   emc_Pb->SetSavedPoint(3,1.039093);
   emc_Pb->SetSavedPoint(4,1.040729);
   emc_Pb->SetSavedPoint(5,1.041529);
   emc_Pb->SetSavedPoint(6,1.041658);
   emc_Pb->SetSavedPoint(7,1.041256);
   emc_Pb->SetSavedPoint(8,1.040448);
   emc_Pb->SetSavedPoint(9,1.039336);
   emc_Pb->SetSavedPoint(10,1.038008);
   emc_Pb->SetSavedPoint(11,1.036533);
   emc_Pb->SetSavedPoint(12,1.03497);
   emc_Pb->SetSavedPoint(13,1.033362);
   emc_Pb->SetSavedPoint(14,1.031744);
   emc_Pb->SetSavedPoint(15,1.030142);
   emc_Pb->SetSavedPoint(16,1.028569);
   emc_Pb->SetSavedPoint(17,1.027038);
   emc_Pb->SetSavedPoint(18,1.025551);
   emc_Pb->SetSavedPoint(19,1.024108);
   emc_Pb->SetSavedPoint(20,1.022704);
   emc_Pb->SetSavedPoint(21,1.021331);
   emc_Pb->SetSavedPoint(22,1.019979);
   emc_Pb->SetSavedPoint(23,1.018636);
   emc_Pb->SetSavedPoint(24,1.01729);
   emc_Pb->SetSavedPoint(25,1.015927);
   emc_Pb->SetSavedPoint(26,1.014533);
   emc_Pb->SetSavedPoint(27,1.013094);
   emc_Pb->SetSavedPoint(28,1.011601);
   emc_Pb->SetSavedPoint(29,1.010037);
   emc_Pb->SetSavedPoint(30,1.008393);
   emc_Pb->SetSavedPoint(31,1.006659);
   emc_Pb->SetSavedPoint(32,1.004827);
   emc_Pb->SetSavedPoint(33,1.002891);
   emc_Pb->SetSavedPoint(34,1.000844);
   emc_Pb->SetSavedPoint(35,0.998684);
   emc_Pb->SetSavedPoint(36,0.9964086);
   emc_Pb->SetSavedPoint(37,0.9940151);
   emc_Pb->SetSavedPoint(38,0.9915054);
   emc_Pb->SetSavedPoint(39,0.9888799);
   emc_Pb->SetSavedPoint(40,0.9861414);
   emc_Pb->SetSavedPoint(41,0.9832996);
   emc_Pb->SetSavedPoint(42,0.9803537);
   emc_Pb->SetSavedPoint(43,0.9773131);
   emc_Pb->SetSavedPoint(44,0.974188);
   emc_Pb->SetSavedPoint(45,0.9709819);
   emc_Pb->SetSavedPoint(46,0.9677029);
   emc_Pb->SetSavedPoint(47,0.9643611);
   emc_Pb->SetSavedPoint(48,0.9609595);
   emc_Pb->SetSavedPoint(49,0.9575238);
   emc_Pb->SetSavedPoint(50,0.9540431);
   emc_Pb->SetSavedPoint(51,0.9505365);
   emc_Pb->SetSavedPoint(52,0.9470082);
   emc_Pb->SetSavedPoint(53,0.9434574);
   emc_Pb->SetSavedPoint(54,0.9399093);
   emc_Pb->SetSavedPoint(55,0.936365);
   emc_Pb->SetSavedPoint(56,0.9328281);
   emc_Pb->SetSavedPoint(57,0.9292979);
   emc_Pb->SetSavedPoint(58,0.9257743);
   emc_Pb->SetSavedPoint(59,0.9222803);
   emc_Pb->SetSavedPoint(60,0.9187965);
   emc_Pb->SetSavedPoint(61,0.9153479);
   emc_Pb->SetSavedPoint(62,0.9119184);
   emc_Pb->SetSavedPoint(63,0.9085045);
   emc_Pb->SetSavedPoint(64,0.9051033);
   emc_Pb->SetSavedPoint(65,0.901733);
   emc_Pb->SetSavedPoint(66,0.8983771);
   emc_Pb->SetSavedPoint(67,0.8950385);
   emc_Pb->SetSavedPoint(68,0.8916979);
   emc_Pb->SetSavedPoint(69,0.8884057);
   emc_Pb->SetSavedPoint(70,0.8850455);
   emc_Pb->SetSavedPoint(71,0.8817217);
   emc_Pb->SetSavedPoint(72,0.8784147);
   emc_Pb->SetSavedPoint(73,0.8750802);
   emc_Pb->SetSavedPoint(74,0.8716865);
   emc_Pb->SetSavedPoint(75,0.8683036);
   emc_Pb->SetSavedPoint(76,0.8648931);
   emc_Pb->SetSavedPoint(77,0.8614398);
   emc_Pb->SetSavedPoint(78,0.8579687);
   emc_Pb->SetSavedPoint(79,0.8544759);
   emc_Pb->SetSavedPoint(80,0.8509224);
   emc_Pb->SetSavedPoint(81,0.847362);
   emc_Pb->SetSavedPoint(82,0.843765);
   emc_Pb->SetSavedPoint(83,0.8401415);
   emc_Pb->SetSavedPoint(84,0.8365108);
   emc_Pb->SetSavedPoint(85,0.8328274);
   emc_Pb->SetSavedPoint(86,0.8291668);
   emc_Pb->SetSavedPoint(87,0.825568);
   emc_Pb->SetSavedPoint(88,0.8219388);
   emc_Pb->SetSavedPoint(89,0.818363);
   emc_Pb->SetSavedPoint(90,0.8148446);
   emc_Pb->SetSavedPoint(91,0.8114235);
   emc_Pb->SetSavedPoint(92,0.8081101);
   emc_Pb->SetSavedPoint(93,0.8049608);
   emc_Pb->SetSavedPoint(94,0.8020152);
   emc_Pb->SetSavedPoint(95,0.7991096);
   emc_Pb->SetSavedPoint(96,0.796572);
   emc_Pb->SetSavedPoint(97,0.7942934);
   emc_Pb->SetSavedPoint(98,0.792311);
   emc_Pb->SetSavedPoint(99,0.7907491);
   emc_Pb->SetSavedPoint(100,0.7895681);
   emc_Pb->SetSavedPoint(101,0.08);
   emc_Pb->SetSavedPoint(102,0.7);
   emc_Pb->SetFillColor(19);
   emc_Pb->SetFillStyle(0);
   emc_Pb->SetLineWidth(2);
   emc_Pb->GetXaxis()->SetLabelFont(42);
   emc_Pb->GetXaxis()->SetLabelSize(0.035);
   emc_Pb->GetXaxis()->SetTitleSize(0.035);
   emc_Pb->GetXaxis()->SetTitleFont(42);
   emc_Pb->GetYaxis()->SetLabelFont(42);
   emc_Pb->GetYaxis()->SetLabelSize(0.035);
   emc_Pb->GetYaxis()->SetTitleSize(0.035);
   emc_Pb->GetYaxis()->SetTitleFont(42);
   emc_Pb->SetParameter(0,208);
   emc_Pb->SetParError(0,0);
   emc_Pb->SetParLimits(0,0,0);
   emc_Pb->Draw("same");
   
   TLegend *leg = new TLegend(0.6,0.7,0.7,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("emc_C","C","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("emc_Fe","Fe","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("emc_Pb","Pb","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
