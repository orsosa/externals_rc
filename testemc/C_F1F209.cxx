#include <iostream>
#include "TROOT.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TLegend.h"

extern"C"{
  float fitemc_rock_(float *X,float *A,bool *GOODFIT);
}

double emc (double *x, double *p)
{
  bool gf;
  float X=x[0], A=p[0];
  double out = fitemc_rock_(&X,&A,&gf);
  return out;
}


int main()

{
  TCanvas *c = new TCanvas("c","c",800,600);
  c->DrawFrame(0,0.85,0.8,1.1,"EMC parametrization");
  c->SetGrid();
  TF1 *EMC_C = new TF1("emc_C",emc,0.08,0.7,1);
  TF1 *EMC_Fe =  new TF1("emc_Fe",emc,0.08,0.7,1); 
  TF1 *EMC_Pb = new TF1("emc_Pb",emc,0.08,0.7,1); 
  //  bool GOODFIT;
  //float X=0.5,A=12;
  //float out = fitemc_rock_(&X,&A,&GOODFIT);
  EMC_C->SetParameter(0,12);
  EMC_C->SetLineColor(kBlue);
  EMC_C->Draw("same");

  EMC_Fe->SetParameter(0,56);
  EMC_Fe->SetLineColor(kRed);
  EMC_Fe->Draw("same");

  EMC_Pb->SetParameter(0,208);
  EMC_Pb->SetLineColor(kBlack);
  EMC_Pb->Draw("same");

  TLegend *l= new TLegend(0.6,0.7,0.7,0.9);
  l->AddEntry(EMC_C,"C","lp");
  l->AddEntry(EMC_Fe,"Fe","lp");
  l->AddEntry(EMC_Pb,"Pb","lp");
  l->Draw();
  c->SaveAs("emc_f.gif");
  c->SaveAs("emc_f.C");

  
  std::cout<<"Done!"<<std::endl;
  return 0;
}
