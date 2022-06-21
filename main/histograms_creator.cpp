#include "../src/generator.hpp"
#include "../src/debug.h"
#include "../src/sample_2016.hpp"
#include "../src/sample_2017.hpp"

#include <ctime>

void VectorCheck(namelist v){
    for(size_t i = 0; i < v.size(); ++i){
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;
}
void VectorCheck(std::vector<double> v){
    for(size_t i = 0; i < v.size(); ++i){
        std::cout << v[i] << std::endl;
    }
    std::cout << std::endl;
}





int main(int argc, char** argv){
    
    std::string observable; 
    std::string year; 
    std::string launch;
    bool isIndividualSampleClean = true; // true is default
    bool isDataCorrected = false; 

    std::clock_t t0 = std::clock();

    if(argc != 4){
        Log("Wrong number of arguments !!!");
        Log(" missing arguments : observable, year and option");
        return 0;
    }
    else{
         observable = argv[1];
         year = argv[2];
         launch = argv[3];
    }
    Log(argc, argv);
    Log(observable);

    std::vector<int> binning(3);
    if(observable == "m_dilep"){
        binning[0] = 7; binning[1] = 20; binning[2] = 300;
        if (launch=="forComp") {binning[0] = 24; binning[1] = 20; binning[2] = 500; }
    }
    else if(observable == "n_jets"){
        binning[0] = 7; binning[1] = 0; binning[2] = 7;
    }
    else if(observable == "n_bjets"){
	binning[0] = 4; binning[1] = 1; binning[2] = 5;
//        binning[0] = 6; binning[1] = 0; binning[2] = 6;
    }
    else if(observable == "pt_lead"){
        binning[0] = 25; binning[1] = 0; binning[2] = 250;
    }
    else if(observable == "pt_sublead"){
        binning[0] = 25; binning[1] = 0; binning[2] = 250;
    }
    else if(observable == "pt_elec"){
        binning[0] = 25; binning[1] = 0; binning[2] = 250;
    }
    else if(observable == "pt_muon"){
        binning[0] = 25; binning[1] = 0; binning[2] = 250;
    }
    else if(observable == "eta_elec"){
        binning[0] = 50; binning[1] = -3; binning[2] = 3;
    }
    else if(observable == "eta_muon"){
        binning[0] = 50; binning[1] = -3; binning[2] = 3;
    }
    else if(observable == "b1_pt"){
        binning[0] = 25; binning[1] = 0; binning[2] = 250;
    }
    else if(observable == "b1_eta"){
        binning[0] = 50; binning[1] = -3; binning[2] = 3;
    }
    else if(observable == "j1_pt"){
        binning[0] = 25; binning[1] = 0; binning[2] = 250;
    }
    else if(observable == "j1_eta"){
        binning[0] = 50; binning[1] = -3; binning[2] = 3;
    }
    else if(observable == "j2_pt"){
        binning[0] = 25; binning[1] = 0; binning[2] = 250;
    }
    else if(observable == "j2_eta"){
        binning[0] = 50; binning[1] = -3; binning[2] = 3;
    }
    else if (observable == "dijet_m"){
        binning[0] = 7; binning[1] = 60; binning[2] = 480;
    }
    else if (observable == "pt_emu"){
        binning[0] = 7; binning[1] = 0; binning[2] = 245;
	if (launch=="forComp") { binning[0] = 25; binning[1] = 0; binning[2] = 500; }
    }
    else if (observable == "pt_ttbar"){
        binning[0] = 7; binning[1] = 0; binning[2] = 420;
    }
    else if (observable == "m_lblj"){
        binning[0] = 7; binning[1] = 0; binning[2] = 700;
    }
    else if (observable == "m_lb"){
        binning[0] = 7; binning[1] = 0; binning[2] = 350;
    }

// ------------------------------------------------------------- //

    namelist triggerList;
    namelist jecList;
    // mc
    namelist sampleList_MC;
    namelist sampleList_ALT;
    namelist sampleList_JEC;
    std::vector<double> number_of_events;
    std::vector<double> mc_rescale;
    std::vector<double> alt_mc_rescale;
    std::vector<std::vector<double>> jec_mc_rescale;
    // data
    namelist sampleList_DATA;
    namelist data;
    std::vector<double> succedJobs;
    
    if(year == "2016"){
        triggerList     = triggerList_2016;
	jecList		= jecList_2016;
        sampleList_MC   = sampleList_MC_2016;
        sampleList_ALT  = sampleList_ALT_2016;
	number_of_events = number_of_events_2016;
        mc_rescale      = mc_rescale_2016;
        alt_mc_rescale  = alt_mc_rescale_2016;

        jec_mc_rescale  = jec_mc_rescale_2016;

        sampleList_DATA = sampleList_DATA_2016;
        data            = data_2016;
        succedJobs      = succedJobs_2016;
    } 
    else if(year == "2017"){        
        triggerList     = triggerList_2017;
        jecList         = jecList_2017;
        sampleList_MC   = sampleList_MC_2017;
        sampleList_ALT  = sampleList_ALT_2017;
        number_of_events = number_of_events_2017;
        mc_rescale      = mc_rescale_2017;
        alt_mc_rescale  = alt_mc_rescale_2017;

        jec_mc_rescale  = jec_mc_rescale_2017;
        
        sampleList_DATA = sampleList_DATA_2017;
        data            = data_2017;
        succedJobs      = succedJobs_2017;
    }
    else{
        std::cout << "Bad year input (2016 or 2017)" << std::endl;
        return 0;
    }

    /*
    VectorCheck(sampleList_MC);
    VectorCheck(mc_rescale);
    VectorCheck(sampleList_DATA);
    VectorCheck(data);
    VectorCheck(succedJobs);
    VectorCheck(triggerList);
    VectorCheck(ttbarList);
    VectorCheck(systematicList);
    VectorCheck(systematicTimeList);
    VectorCheck(systematicRate);
    */

// ------------------------------------------------------------- //


    if(launch != "All" and launch != "alt"  and launch != "jec" and launch != "timed" and launch != "mc" and launch != "forComp" and launch != "data" and launch != "sme" and launch!="inclusive" and launch!="test")
    {
        std::cout << "Error with option : (All, mc, data, alt, jec, timed, sme, forComp, inclusive, test)" << std::endl;
        return 0;
    }

    Generator gen(observable, binning, year);

    if(launch == "mc"){
        gen.generateMC(sampleList_MC, triggerList, ttbarList, 
                       systematicList, systematicTimeList,
                       number_of_events, mc_rescale, "RECREATE", isIndividualSampleClean, true, false);   
    }
    else if(launch == "data"){
        gen.generateData(sampleList_DATA, triggerList, data, 
                         succedJobs, "RECREATE", isDataCorrected, isIndividualSampleClean);       
    }
    else if(launch == "alt"){
        gen.generateAltMC(sampleList_ALT, systematicAltList, triggerList,alt_mc_rescale, isIndividualSampleClean, true);
    }
    else if(launch == "jec"){
        //gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, jec_mc_rescale, isIndividualSampleClean, true);
        gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, mc_rescale, isIndividualSampleClean, true);
    }
    else if(launch == "timed"){
        gen.generateDataTimed(sampleList_DATA, triggerList, data, 
                               succedJobs, 24, isDataCorrected, isIndividualSampleClean);
    }
    else if(launch == "forComp"){
        gen.generateMCforComp(sampleList_MC, triggerList, ttbarList, 
                       mc_rescale, "RECREATE", isIndividualSampleClean);    
        gen.generateData(sampleList_DATA, triggerList, data, 
                         succedJobs, "RECREATE", isDataCorrected, isIndividualSampleClean);   
    }
    else if(launch == "inclusive"){
        gen.generateMC(sampleList_MC, triggerList, ttbarList,
                       systematicList, systematicTimeList,
                       number_of_events, mc_rescale, "RECREATE", isIndividualSampleClean, false, false);
        gen.generateAltMC(sampleList_ALT, systematicAltList, triggerList,alt_mc_rescale, isIndividualSampleClean, false);
        //gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, jec_mc_rescale, isIndividualSampleClean, false);
	gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, mc_rescale, isIndividualSampleClean, false);
        gen.generateData(sampleList_DATA, triggerList, data,
                         succedJobs, "RECREATE", isDataCorrected, isIndividualSampleClean);
    }
    else if(launch == "test"){
        gen.generateMC(sampleList_MC, triggerList, ttbarList,
                       systematicList, systematicTimeList,
                       number_of_events, mc_rescale, "RECREATE", isIndividualSampleClean, false, false);
    }
    else if(launch == "sme"){
	std::string cmd_sme = "./bin/modulation_creator "+observable;
        system(cmd_sme.c_str());
    }
    else{
	//forComp
        gen.generateMCforComp(sampleList_MC, triggerList, ttbarList, 
                       mc_rescale, "RECREATE", isIndividualSampleClean);
	//differential    
        gen.generateMC(sampleList_MC, triggerList, ttbarList, 
                       systematicList,systematicTimeList,
                       number_of_events, mc_rescale, "RECREATE", isIndividualSampleClean, true, false);
        gen.generateData(sampleList_DATA, triggerList, data, 
                         succedJobs, "RECREATE", isDataCorrected,  isIndividualSampleClean);           
        gen.generateDataTimed(sampleList_DATA, triggerList, data, 
                               succedJobs, 24, isIndividualSampleClean);
        gen.generateAltMC(sampleList_ALT, systematicAltList, triggerList,alt_mc_rescale, isIndividualSampleClean, true);
        //gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, jec_mc_rescale, isIndividualSampleClean, true);
        gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, mc_rescale, isIndividualSampleClean, true);
	//inclusive
        gen.generateMC(sampleList_MC, triggerList, ttbarList,
                       systematicList,systematicTimeList,
                       number_of_events, mc_rescale, "RECREATE", isIndividualSampleClean, false, false);
        gen.generateAltMC(sampleList_ALT, systematicAltList, triggerList,alt_mc_rescale, isIndividualSampleClean, false);
        //gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, jec_mc_rescale, isIndividualSampleClean, false);
        gen.generateJecMC(sampleList_MC, jecList, ttbarList, triggerList, mc_rescale, isIndividualSampleClean, false);
	//sme
        std::string cmd_sme = "./bin/modulation_creator "+observable;
        system(cmd_sme.c_str());
    }


    std::clock_t t1 = std::clock();
    Log(elapsedTime(t0,t1));



    return 0;
}
