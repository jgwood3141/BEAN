#ifndef ProductArea_BNjet_h
#define ProductArea_BNjet_h

#include <vector>

struct BNjet
{
  explicit BNjet(double v,  int c) :
    energy(v), et(v), pt(v), px(v), py(v), pz(v), phi(v), eta(v), theta(v),
    Upt(v), Uenergy(v), L2pt(v), L2L3pt(v), L2L3respt(v), respt(v),
    EMfrac(v), Hadfrac(v), charge(v), jetChargeRelativePtWeighted(v),
    mass(v), area(v), fHPD(v), approximatefHPD(v), genPartonET(v),
    genPartonPT(v), genPartonEta(v), genPartonPhi(v), genJetET(v),
    genJetPT(v), genJetEta(v), genJetPhi(v), btagTChighPur(v),
    btagTChighEff(v), btagJetProb(v), btagJetBProb(v), btagSoftEle(v),
    btagSoftMuon(v), btagSoftMuonNoIP(v), btagSecVertex(v),
    btagSecVertexHighEff(v), btagSecVertexHighPur(v),
    btagCombinedSecVertex(v), btagCombinedSecVertexMVA(v),
    btagSoftMuonByPt(v), btagSoftMuonByIP3(v), btagSoftElectronByPt(v),
    btagSoftElectronByIP3(v), n90Hits(v), hitsInN90(v),
    chargedHadronEnergyFraction(v), neutralHadronEnergyFraction(v),
    chargedEmEnergyFraction(v), neutralEmEnergyFraction(v), fLong(v),
    fShort(v), etaetaMoment(v), phiphiMoment(v), JESunc(v), JECuncUp(v),
    JECuncDown(v), puJetMVA_full(v), puJetMVA_simple(v),
    puJetMVA_cutbased(v), dZ(v), dR2Mean(v), dRMean(v), frac01(v),
    frac02(v), frac03(v), frac04(v), frac05(v), frac06(v), frac07(v),
    beta(v), betaStar(v), betaClassic(v), betaStarClassic(v), ptD(v),
    nvtx(v), d0(v), leadCandPt(v), leadCandVx(v), leadCandVy(v),
    leadCandVz(v), leadCandDistFromPV(v), isCorrected(c), flavour(c),
    Nconst(c), jetIDMinimal(c), jetIDLooseAOD(c), jetIDLoose(c),
    jetIDTight(c), genPartonId(c), genPartonMotherId(c),
    genPartonMother0Id(c), genPartonMother1Id(c),
    genPartonGrandMotherId(c), genPartonGrandMother00Id(c),
    genPartonGrandMother01Id(c), genPartonGrandMother10Id(c),
    genPartonGrandMother11Id(c), chargedMultiplicity(c),
    neutralMultiplicity(c), nconstituents(c), nHit(c), puJetId_full(c),
    puJetId_simple(c), puJetId_cutbased(c), puJetId_tight_full(c),
    puJetId_tight_simple(c), puJetId_tight_cutbased(c),
    puJetId_medium_full(c), puJetId_medium_simple(c),
    puJetId_medium_cutbased(c), puJetId_loose_full(c),
    puJetId_loose_simple(c), puJetId_loose_cutbased(c), QGMLP(v), QGLD(v) {};

  BNjet() :
    energy(-99), et(-99), pt(-99), px(-99), py(-99), pz(-99), phi(-99),
    eta(-99), theta(-99), Upt(-99), Uenergy(-99), L2pt(-99), L2L3pt(-99),
    L2L3respt(-99), respt(-99), EMfrac(-99), Hadfrac(-99), charge(-99),
    jetChargeRelativePtWeighted(-99), mass(-99), area(-99), fHPD(-99),
    approximatefHPD(-99), genPartonET(-99), genPartonPT(-99),
    genPartonEta(-99), genPartonPhi(-99), genJetET(-99), genJetPT(-99),
    genJetEta(-99), genJetPhi(-99), btagTChighPur(-99), btagTChighEff(-99),
    btagJetProb(-99), btagJetBProb(-99), btagSoftEle(-99),
    btagSoftMuon(-99), btagSoftMuonNoIP(-99), btagSecVertex(-99),
    btagSecVertexHighEff(-99), btagSecVertexHighPur(-99),
    btagCombinedSecVertex(-99), btagCombinedSecVertexMVA(-99),
    btagSoftMuonByPt(-99), btagSoftMuonByIP3(-99),
    btagSoftElectronByPt(-99), btagSoftElectronByIP3(-99), n90Hits(-99),
    hitsInN90(-99), chargedHadronEnergyFraction(-99),
    neutralHadronEnergyFraction(-99), chargedEmEnergyFraction(-99),
    neutralEmEnergyFraction(-99), fLong(-99), fShort(-99),
    etaetaMoment(-99), phiphiMoment(-99), JESunc(-99), JECuncUp(-99),
    JECuncDown(-99), puJetMVA_full(-99), puJetMVA_simple(-99),
    puJetMVA_cutbased(-99), dZ(-99), dR2Mean(-99), dRMean(-99),
    frac01(-99), frac02(-99), frac03(-99), frac04(-99), frac05(-99),
    frac06(-99), frac07(-99), beta(-99), betaStar(-99), betaClassic(-99),
    betaStarClassic(-99), ptD(-99), nvtx(-99), d0(-99), leadCandPt(-99),
    leadCandVx(-99), leadCandVy(-99), leadCandVz(-99),
    leadCandDistFromPV(-99), isCorrected(0), flavour(-99), Nconst(-99),
    jetIDMinimal(-99), jetIDLooseAOD(-99), jetIDLoose(-99),
    jetIDTight(-99), genPartonId(-99), genPartonMotherId(-99),
    genPartonMother0Id(-99), genPartonMother1Id(-99),
    genPartonGrandMotherId(-99), genPartonGrandMother00Id(-99),
    genPartonGrandMother01Id(-99), genPartonGrandMother10Id(-99),
    genPartonGrandMother11Id(-99), chargedMultiplicity(-99),
    neutralMultiplicity(-99), nconstituents(-99), nHit(-99),
    puJetId_full(-99), puJetId_simple(-99), puJetId_cutbased(-99),
    puJetId_tight_full(-99), puJetId_tight_simple(-99),
    puJetId_tight_cutbased(-99), puJetId_medium_full(-99),
    puJetId_medium_simple(-99), puJetId_medium_cutbased(-99),
    puJetId_loose_full(-99), puJetId_loose_simple(-99),
    puJetId_loose_cutbased(-99), QGMLP(-99), QGLD(-99) {};

  double energy, et, pt, px, py, pz, phi, eta, theta;
  double Upt, Uenergy, L2pt, L2L3pt, L2L3respt;
  double respt;
  double EMfrac, Hadfrac, charge;
  double jetChargeRelativePtWeighted;
  double mass, area;
  double fHPD, approximatefHPD;
  double genPartonET, genPartonPT, genPartonEta, genPartonPhi, genJetET, genJetPT, genJetEta, genJetPhi;
  double btagTChighPur, btagTChighEff, btagJetProb, btagJetBProb, btagSoftEle, btagSoftMuon, btagSoftMuonNoIP, btagSecVertex, btagSecVertexHighEff;
  double btagSecVertexHighPur, btagCombinedSecVertex, btagCombinedSecVertexMVA, btagSoftMuonByPt, btagSoftMuonByIP3, btagSoftElectronByPt, btagSoftElectronByIP3;
  double n90Hits, hitsInN90;
  double chargedHadronEnergyFraction, neutralHadronEnergyFraction, chargedEmEnergyFraction, neutralEmEnergyFraction;
  double fLong, fShort;
  double etaetaMoment, phiphiMoment;
  double JESunc, JECuncUp, JECuncDown;
  double puJetMVA_full, puJetMVA_simple, puJetMVA_cutbased;
  double dZ, dR2Mean, dRMean;
  double frac01, frac02, frac03, frac04, frac05, frac06, frac07;
  double beta, betaStar, betaClassic, betaStarClassic;
  double ptD, nvtx, d0;
  double leadCandPt, leadCandVx, leadCandVy, leadCandVz, leadCandDistFromPV;
  int isCorrected;
  int flavour;
  int Nconst;
  int jetIDMinimal, jetIDLooseAOD, jetIDLoose, jetIDTight;
  int genPartonId, genPartonMotherId, genPartonMother0Id, genPartonMother1Id, genPartonGrandMotherId, genPartonGrandMother00Id, genPartonGrandMother01Id, genPartonGrandMother10Id, genPartonGrandMother11Id;
  int chargedMultiplicity, neutralMultiplicity;
  int nconstituents, nHit;
  int puJetId_full, puJetId_simple, puJetId_cutbased, puJetId_tight_full, puJetId_tight_simple, puJetId_tight_cutbased, puJetId_medium_full, puJetId_medium_simple, puJetId_medium_cutbased, puJetId_loose_full, puJetId_loose_simple, puJetId_loose_cutbased;
  int QGMLP, QGLD;
};

typedef std::vector<BNjet> BNjetCollection;

#endif
