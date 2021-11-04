// 2017 samples : 

#include <vector> 
#include <string> 
 
using  namelist = std::vector<std::string>; 
 
#ifndef COMMON_LIST 
#define COMMON_LIST 
namelist ttbarList {
    "signal",
    "ttx",
    "singletop",
    "dibosons",
    "vjets"
};

namelist jecList {
    "TotalUp",
    "TotalDown"
};

namelist systematicList {
    "syst_elec_reco",
    "syst_elec_id",
    "syst_muon_id",
    "syst_muon_iso",
    "syst_pu",
    "syst_b",
    "syst_pt_top",
    "syst_prefiring"
};

namelist systematicAltList {
    "CP5Up",
    "CP5Down",
    "hdampUp",
    "hdampDown",
    "mtop169",
    "mtop175",
    "erdOn",
    "QCD",
    "GluonMove"
};

namelist systematicTimeList {
    "lumi_flat",
    "lumi_stability",
    "lumi_linearity",
    "emu_trig"
};

namelist systematicRate {
    "1.05",
    "1.2",
    "1.3",
    "1.3",
    "1.3"
};

#endif 

namelist triggerList_2017 {
    "trg_muon_electron_mu8ele23DZ_fired",
    "trg_muon_electron_mu23ele12_fired",
    "trg_muon_mu27_fired",
    "trg_electron_ele35_fired"
};

namelist sampleList_MC_2017 {
    "MC_dibosons_WW",
    "MC_dibosons_WZ",
    "MC_dibosons_ZZ",
    "MC_signal_dilep",
    "MC_signal_hadronic",
    "MC_signal_semilep",
    "MC_singletop_ST_s",
    "MC_singletop_ST_s2",
    "MC_singletop_ST_tW_antitop",
    "MC_singletop_ST_tW_antitop2",
    "MC_singletop_ST_tW_top",
    "MC_singletop_ST_tW_top2",
    "MC_singletop_ST_t_antitop",
    "MC_singletop_ST_t_top",
    "MC_ttx_TTW",
    "MC_ttx_TTW2",
    "MC_ttx_TTW3",
    "MC_ttx_TTZ",
    "MC_ttx_TTZ2",
    "MC_ttx_TTZ3",
    "MC_wjets_WJets",
    "MC_wjets_WJets2",
    "MC_zjets_DY_1050",
    "MC_zjets_DY_50",
    "MC_zjets_DY_502"
};

namelist sampleList_ALT_2017 {
    "alt_MC_CP5Down",
    "alt_MC_CP5Down_pmx",
    "alt_MC_CP5Up",
    "alt_MC_CP5Up_pmx",
    "alt_MC_GluonMove",
    "alt_MC_QCDbased",
    "alt_MC_QCDbased_ext",
    "alt_MC_erdOn",
    "alt_MC_hdampDown",
    "alt_MC_hdampDown_pmx",
    "alt_MC_hdampUp",
    "alt_MC_hdampUp_pmx",
    "alt_MC_mtop169p5",
    "alt_MC_mtop169p5_pmx",
    "alt_MC_mtop175p5",
    "alt_MC_mtop175p5_pmx",
    "alt_MChad_CP5Down",
    "alt_MChad_CP5Up",
    "alt_MChad_GluonMove",
    "alt_MChad_QCDbased",
    "alt_MChad_erdOn",
    "alt_MChad_hdampDown",
    "alt_MChad_hdampUp",
    "alt_MChad_mtop169p5",
    "alt_MChad_mtop175p5_pmx",
    "alt_MCsemilep_CP5Down",
    "alt_MCsemilep_CP5Up",
    "alt_MCsemilep_GluonMove",
    "alt_MCsemilep_QCDbased",
    "alt_MCsemilep_erdOn",
    "alt_MCsemilep_hdampDown",
    "alt_MCsemilep_hdampUp",
    "alt_MCsemilep_mtop169p5",
    "alt_MCsemilep_mtop169p5_pmx",
    "alt_MCsemilep_mtop175p5",
    "alt_MCsemilep_mtop175p5_pmx"
};

std::vector<double> mc_rescale_2017 {
    0.632685936946,
    0.507367961283,
    0.356295313799,
    0.000741891445034,
    0.000384013200597,
    0.00167496488432,
    0.00618314880147,
    0.00618314880147,
    0.00273686053934,
    0.00273686053934,
    0.00271034140797,
    0.00271034140797,
    0.956719095944,
    0.98963825863,
    0.00249455236929,
    0.00249455236929,
    0.0301071397037,
    0.00227191128267,
    0.00227191128267,
    0.0574278760564,
    41.8452011076,
    41.8452011076,
    23.7951788546,
    0.000467535578787,
    0.000467535578787
};

std::vector<double> alt_mc_rescale_2017 {
    0.00339552027606,
    0.00339552027606,
    0.00331173760596,
    0.00331173760596,
    0.00829809284258,
    0.00342379438455,
    0.00342379438455,
    0.011805744936,
    0.00332308015392,
    0.00332308015392,
    0.00496601595476,
    0.00496601595476,
    0.00322904290599,
    0.00322904290599,
    0.00380413022261,
    0.00380413022261,
    0.0018355037801,
    0.00201416258325,
    0.00203200136464,
    0.00193995477222,
    0.00216993673886,
    0.00215004116141,
    0.00201581282393,
    0.00129926910717,
    0.00129926910717,
    0.00196912128766,
    0.00251763733101,
    0.00190487030579,
    0.00476622275425,
    0.00555629145159,
    0.00192131072321,
    0.00211273377091,
    0.00162751335883,
    0.00162751335883,
    0.00205745677625,
    0.00205745677625
};

std::vector<std::vector<double> > jec_mc_rescale_2017 {
    {
        0.632685936946,
        0.507367961283,
        0.356295313799,
        0.000741891445034,
        0.000384013200597,
        0.00167496488432,
        0.00618314880147,
        0.00618314880147,
        0.00273686053934,
        0.00273686053934,
        0.00271034140797,
        0.00271034140797,
        0.956719095944,
        0.98963825863,
        0.00249455236929,
        0.00249455236929,
        0.0301071397037,
        0.00227191128267,
        0.00227191128267,
        0.0574278760564,
        41.8452011076,
        41.8452011076,
        23.7951788546,
        0.000467535578787,
        0.000467535578787
    },
    {
        0.632685936946,
        0.507367961283,
        0.356295313799,
        0.000741891445034,
        0.000384013200597,
        0.00167496488432,
        0.00618314880147,
        0.00618314880147,
        0.00273686053934,
        0.00273686053934,
        0.00271034140797,
        0.00271034140797,
        0.956719095944,
        0.98963825863,
        0.00249455236929,
        0.00249455236929,
        0.0301071397037,
        0.00227191128267,
        0.00227191128267,
        0.0574278760564,
        41.8452011076,
        41.8452011076,
        23.7951788546,
        0.000467535578787,
        0.000467535578787
    }
};

namelist sampleList_DATA_2017 {
    "MuonEG_Run2017B_31Mar2018",
    "MuonEG_Run2017C_31Mar2018",
    "MuonEG_Run2017D_31Mar2018",
    "MuonEG_Run2017E_31Mar2018",
    "MuonEG_Run2017F_31Mar2018",
    "SingleElectron_Run2017B_31Mar2018",
    "SingleElectron_Run2017C_31Mar2018",
    "SingleElectron_Run2017D_31Mar2018",
    "SingleElectron_Run2017E_31Mar2018",
    "SingleElectron_Run2017F_31Mar2018",
    "SingleMuon_Run2017B_31Mar2018",
    "SingleMuon_Run2017C_31Mar2018",
    "SingleMuon_Run2017D_31Mar2018",
    "SingleMuon_Run2017E_31Mar2018",
    "SingleMuon_Run2017F_31Mar2018"
};

std::vector<double> succedJobs_2017 {
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0
};

namelist data_2017 {
    "Run2017"
};

