// 2016 samples : 

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

namelist systematicList {
    "syst_elec_reco",
    "syst_elec_id",
    "syst_muon_id",
    "syst_muon_iso",
    "syst_pu",
    "syst_b_correlated",
    "syst_b_uncorrelated",
    "syst_l_correlated",
    "syst_l_uncorrelated",
    "syst_pt_top",
    "syst_prefiring",
    "syst_em_trig",
    "syst_ps_isr",
    "syst_ps_fsr",
    "syst_qcdscale",
    "syst_pdfas"
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
    "1.04",
    "1.2",
    "1.3",
    "1.3",
    "1.3",
    "1.2"
};

#endif 

namelist triggerList_2016 {
    "trg_muon_electron_mu23ele12_fired",
    "trg_muon_electron_mu8ele23_fired",
    "trg_muon_mu24_fired",
    "trg_muon_mutk24_fired",
    "trg_electron_ele27_fired",
    "trg_muon_electron_mu8ele23DZ_fired",
    "trg_muon_electron_mu23ele12DZ_fired"
};

namelist jecList_2016 {
    "Total_up",
    "Total_down",
    "Absolute_up",
    "Absolute_down",
    "Absolute_2016_up",
    "Absolute_2016_down",
    "FlavorQCD_up",
    "FlavorQCD_down",
    "BBEC1_up",
    "BBEC1_down",
    "BBEC1_2016_up",
    "BBEC1_2016_down",
    "RelativeBal_up",
    "RelativeBal_down",
    "RelativeSample_2016_up",
    "RelativeSample_2016_down"
};

namelist sampleList_MC_2016 {
    "MC_dibosons_WW",
    "MC_dibosons_WW2",
    "MC_dibosons_WZ",
    "MC_dibosons_WZ2",
    "MC_dibosons_ZZ",
    "MC_dibosons_ZZ2",
    "MC_signal_dilep",
    "MC_signal_hadronic",
    "MC_signal_semilep",
    "MC_singletop_ST_s",
    "MC_singletop_ST_tW_antitop",
    "MC_singletop_ST_tW_top",
    "MC_singletop_ST_t_antitop",
    "MC_singletop_ST_t_top",
    "MC_ttx_TTW",
    "MC_ttx_TTW2",
    "MC_ttx_TTW3",
    "MC_ttx_TTZ",
    "MC_ttx_TTZ2",
    "MC_ttx_TTZ3",
    "MC_ttx_TTZ4",
    "MC_wjets_WJets",
    "MC_wjets_WJets2",
    "MC_zjets_DY_1050",
    "MC_zjets_DY_10502",
    "MC_zjets_DY_10503",
    "MC_zjets_DY_50"
};

namelist sampleList_ALT_2016 {
    "alt_MC_CP5Down",
    "alt_MC_CP5Down_pmx",
    "alt_MC_CP5Up",
    "alt_MC_CP5Up_pmx",
    "alt_MC_GluonMove",
    "alt_MC_QCDbased",
    "alt_MC_erdOn",
    "alt_MC_erdOn_ext",
    "alt_MC_hdampDown",
    "alt_MC_hdampDown_pmx",
    "alt_MC_hdampUp",
    "alt_MC_hdampUp_pmx",
    "alt_MC_mtop169p5",
    "alt_MC_mtop175p5",
    "alt_MChad_CP5Down",
    "alt_MChad_CP5Up",
    "alt_MChad_GluonMove",
    "alt_MChad_QCDbased",
    "alt_MChad_erdOn",
    "alt_MChad_hdampDown",
    "alt_MChad_hdampUp",
    "alt_MChad_mtop169p5",
    "alt_MChad_mtop175p5",
    "alt_MCsemilep_CP5Down",
    "alt_MCsemilep_CP5Up",
    "alt_MCsemilep_GluonMove",
    "alt_MCsemilep_QCDbased",
    "alt_MCsemilep_erdOn",
    "alt_MCsemilep_hdampDown",
    "alt_MCsemilep_hdampUp",
    "alt_MCsemilep_mtop169p5",
    "alt_MCsemilep_mtop175p5"
};

std::vector<double> number_of_events_2016 {
    7982180,
    7982180,
    3997571,
    3997571,
    1988098,
    1988098,
    67860400,
    68518800,
    107604800,
    9842599,
    4980600,
    4983500,
    17780700,
    31848000,
    5280565,
    5280565,
    833298,
    13764447,
    13764447,
    13764447,
    749400,
    261383472,
    261383472,
    139138448,
    139138448,
    139138448,
    120777245
};

std::vector<double> mc_rescale_2016 {
    0.533846696909,
    0.533846696909,
    0.423248767814,
    0.423248767814,
    0.298363410657,
    0.298363410657,
    0.000653532182339,
    0.000631102864439,
    0.000406965344277,
    0.0100761139062,
    0.00739198265281,
    0.00740052052681,
    0.163526347845,
    0.153384581332,
    0.00410526703261,
    0.00410526703261,
    0.0256093460724,
    0.00261284391535,
    0.00261284391535,
    0.00261284391535,
    0.047979475341,
    5.48022253144e-05,
    5.48022253144e-05,
    0.000193651424375,
    0.000193651424375,
    0.000193651424375,
    0.000117804520985
};

std::vector<double> alt_mc_rescale_2016 {
    0.003086798274,
    0.003086798274,
    0.00298863599552,
    0.00298863599552,
    0.0234665458817,
    0.00298700840922,
    0.00304513169144,
    0.00304513169144,
    0.00297464153484,
    0.00297464153484,
    0.00297853098457,
    0.00297853098457,
    0.00282261782197,
    0.00425593585086,
    0.00154871621743,
    0.00154770934979,
    0.00149723560145,
    0.00157550286785,
    0.00158172170708,
    0.0014961772943,
    0.00150687967283,
    0.00417129316053,
    0.00490234912708,
    0.00151252849991,
    0.00149775185668,
    0.0016544799152,
    0.00149931617347,
    0.0015114282423,
    0.00146862502035,
    0.00147584364646,
    0.00150275260967,
    0.00216875844664
};

std::vector<std::vector<double> > jec_mc_rescale_2016 {
    {
        0.533846696909,
        0.533846696909,
        0.423248767814,
        0.423248767814,
        0.298363410657,
        0.298363410657,
        0.000653532182339,
        0.000631102864439,
        0.000406965344277,
        0.0100761139062,
        0.00739198265281,
        0.00740052052681,
        0.163526347845,
        0.153384581332,
        0.00410526703261,
        0.00410526703261,
        0.0256093460724,
        0.00261284391535,
        0.00261284391535,
        0.00261284391535,
        0.047979475341,
        5.48022253144e-05,
        5.48022253144e-05,
        0.000193651424375,
        0.000193651424375,
        0.000193651424375,
        0.000117804520985
    },
    {
        0.533846696909,
        0.533846696909,
        0.423248767814,
        0.423248767814,
        0.298363410657,
        0.298363410657,
        0.000653532182339,
        0.000631102864439,
        0.000406965344277,
        0.0100761139062,
        0.00739198265281,
        0.00740052052681,
        0.163526347845,
        0.153384581332,
        0.00410526703261,
        0.00410526703261,
        0.0256093460724,
        0.00261284391535,
        0.00261284391535,
        0.00261284391535,
        0.047979475341,
        5.48022253144e-05,
        5.48022253144e-05,
        0.000193651424375,
        0.000193651424375,
        0.000193651424375,
        0.000117804520985
    }
};

namelist sampleList_DATA_2016 {
    "MuonEG_Run2016B_17Jul2018",
    "MuonEG_Run2016C_17Jul2018",
    "MuonEG_Run2016D_17Jul2018",
    "MuonEG_Run2016E_17Jul2018",
    "MuonEG_Run2016F_17Jul2018",
    "MuonEG_Run2016G_17Jul2018",
    "MuonEG_Run2016H_17Jul2018",
    "SingleElectron_Run2016B_17Jul2018",
    "SingleElectron_Run2016C_17Jul2018",
    "SingleElectron_Run2016D_17Jul2018",
    "SingleElectron_Run2016E_17Jul2018",
    "SingleElectron_Run2016F_17Jul2018",
    "SingleElectron_Run2016G_17Jul2018",
    "SingleElectron_Run2016H_17Jul2018",
    "SingleMuon_Run2016B_17Jul2018",
    "SingleMuon_Run2016C_17Jul2018",
    "SingleMuon_Run2016D_17Jul2018",
    "SingleMuon_Run2016E_17Jul2018",
    "SingleMuon_Run2016F_17Jul2018",
    "SingleMuon_Run2016G_17Jul2018",
    "SingleMuon_Run2016H_17Jul2018"
};

std::vector<double> succedJobs_2016 {
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
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0,
    1.0
};

namelist data_2016 {
    "Run2016"
};

