// generated from file './/vfm.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace vfm {

template <int tab_size>
struct table1d_imp { // 1-dimensional clipping table
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
};

static table1d_imp<100> clip __rt_data = {
	0.005,0.795235013262,101.97,100, {
	0.00548195523036,0.016445865691,0.0274097761516,0.0383736866119,0.0493375970718,
	0.060301507531,0.0712654179894,0.0822293284464,0.0931932389016,0.104157149354,
	0.115121059803,0.126084970245,0.13704888068,0.148012791103,0.158976701508,
	0.169940611889,0.180904522235,0.19186843253,0.202832342751,0.213796252866,
	0.224760162828,0.23572407257,0.246687981995,0.257651890962,0.26861579927,
	0.279579706628,0.290543612617,0.301507516632,0.312471417804,0.323435314878,
	0.334399206045,0.3453630887,0.356326959087,0.367290811794,0.378254639021,
	0.389218429528,0.400182167115,0.411145828437,0.422109379849,0.433072772871,
	0.444035937638,0.454998773485,0.465961135365,0.476922814321,0.48788350936,
	0.498842787024,0.509800023297,0.520754320256,0.531704386732,0.542648367922,
	0.55358360312,0.564506283341,0.575410971703,0.586289940184,0.597132269761,
	0.607922663898,0.618639951041,0.629255322196,0.639730493837,0.650016225239,
	0.660051925492,0.669767316942,0.679086989359,0.687937882416,0.696258343947,
	0.704006183628,0.711163121782,0.717734492237,0.723745022743,0.72923269117,
	0.734242606851,0.738822090117,0.743017303269,0.74687127245,0.750422944114,
	0.7537069184,0.756753578753,0.759589425229,0.762237491115,0.764717773458,
	0.767047640962,0.769242202516,0.771314630963,0.773276442704,0.775137736666,
	0.776907397287,0.778593266396,0.780202288563,0.781740634041,0.783213802858,
	0.784626713121,0.785983776084,0.787288960129,0.788545845459,0.789757670968,
	0.790927374556,0.792057627879,0.793150866414,0.794209315546,0.795235013262
	}
};

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec3[2];
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fVec0[2];
	double 	fConst23;
	double 	fRec5[2];
	double 	fRec4[4];
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fRec6[4];
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fVec1[2];
	double 	fRec2[2];
	double 	fRec1[4];
	double 	fConst49;
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "vfm";
	name = N_("VFM");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec5[i] = 0;
	for (int i=0; i<4; i++) fRec4[i] = 0;
	for (int i=0; i<4; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fVec1[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<4; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = double(iConst0);
	fConst2 = (9.02642841732258e-15 * fConst1);
	fConst3 = (1.29314506250926e-10 + (fConst1 * ((fConst1 * (7.58838021629481e-13 - fConst2)) - 1.80320898419597e-11)));
	fConst4 = (2.70792852519677e-14 * fConst1);
	fConst5 = (3.87943518752777e-10 + (fConst1 * ((fConst1 * (fConst4 - 7.58838021629481e-13)) - 1.80320898419597e-11)));
	fConst6 = (3.87943518752777e-10 + (fConst1 * (1.80320898419597e-11 + (fConst1 * (0 - (7.58838021629481e-13 + fConst4))))));
	fConst7 = (1.29314506250926e-10 + (fConst1 * (1.80320898419597e-11 + (fConst1 * (7.58838021629481e-13 + fConst2)))));
	fConst8 = (1.0 / fConst7);
	fConst9 = (491.77839701345533 / double(iConst0));
	fConst10 = (1 - fConst9);
	fConst11 = (1.75174058966859e-14 * fConst1);
	fConst12 = ((fConst1 * (0 - (6.89128730192832e-13 + fConst11))) - 6.09641865104507e-12);
	fConst13 = (1.77503953323676e-14 * fConst1);
	fConst14 = (5.64220272644189e-11 + (fConst1 * (2.76999562285192e-12 + fConst13)));
	fConst15 = (6.09641865104507e-12 + (fConst1 * (fConst11 - 6.89128730192832e-13)));
	fConst16 = ((fConst1 * (2.76999562285192e-12 - fConst13)) - 5.64220272644189e-11);
	fConst17 = (5.25522176900578e-14 * fConst1);
	fConst18 = (6.09641865104507e-12 + (fConst1 * (6.89128730192832e-13 - fConst17)));
	fConst19 = (5.32511859971027e-14 * fConst1);
	fConst20 = ((fConst1 * (fConst19 - 2.76999562285192e-12)) - 5.64220272644189e-11);
	fConst21 = ((fConst1 * (6.89128730192832e-13 + fConst17)) - 6.09641865104507e-12);
	fConst22 = (5.64220272644189e-11 + (fConst1 * (0 - (2.76999562285192e-12 + fConst19))));
	fConst23 = (1.0 / (1 + fConst9));
	fConst24 = (1.50377877331799e-15 * fConst1);
	fConst25 = (4.87399871393726e-11 + fConst24);
	fConst26 = (4.51133631995396e-15 * fConst1);
	fConst27 = (0 - (4.87399871393726e-11 + fConst26));
	fConst28 = (fConst26 - 4.87399871393726e-11);
	fConst29 = (4.87399871393726e-11 - fConst24);
	fConst30 = faustpower<2>(fConst1);
	fConst31 = (1.71612117414761e-14 * fConst1);
	fConst32 = ((fConst1 * (0 - (2.76200573501281e-12 + fConst31))) - 5.97245573649515e-11);
	fConst33 = (1.73894636335001e-14 * fConst1);
	fConst34 = (1.59619235172371e-09 + (fConst1 * (1.25509631951289e-11 + fConst33)));
	fConst35 = (5.97245573649515e-11 + (fConst1 * (fConst31 - 2.76200573501281e-12)));
	fConst36 = ((fConst1 * (1.25509631951289e-11 - fConst33)) - 1.59619235172371e-09);
	fConst37 = (5.14836352244284e-14 * fConst1);
	fConst38 = (5.97245573649515e-11 + (fConst1 * (2.76200573501281e-12 - fConst37)));
	fConst39 = (5.21683909005002e-14 * fConst1);
	fConst40 = ((fConst1 * (fConst39 - 1.25509631951289e-11)) - 1.59619235172371e-09);
	fConst41 = ((fConst1 * (2.76200573501281e-12 + fConst37)) - 5.97245573649515e-11);
	fConst42 = (1.59619235172371e-09 + (fConst1 * (0 - (1.25509631951289e-11 + fConst39))));
	fConst43 = (1.47320134577956e-15 * fConst1);
	fConst44 = (4.7748921530771e-11 + fConst43);
	fConst45 = (4.41960403733869e-15 * fConst1);
	fConst46 = (0 - (4.7748921530771e-11 + fConst45));
	fConst47 = (fConst45 - 4.7748921530771e-11);
	fConst48 = (4.7748921530771e-11 - fConst43);
	fConst49 = (faustpower<3>(fConst1) / fConst7);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = (f - clip.low) * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, -x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * double(fslider1));
	int 	iSlow2 = int(double(fslider2));
	for (int i=0; i<count; i++) {
		fRec0[0] = ((0.993 * fRec0[1]) + fSlow0);
		double fTemp0 = (4.16960456129847e-14 * fRec0[0]);
		fRec3[0] = ((0.993 * fRec3[1]) + fSlow1);
		double fTemp1 = (3.04820932552254e-10 + (fConst1 * (fConst14 + (fConst12 * fRec3[0]))));
		double fTemp2 = (double)input0[i];
		fVec0[0] = fTemp2;
		fRec5[0] = (fConst23 * ((fVec0[0] - fVec0[1]) + (fConst10 * fRec5[1])));
		fRec4[0] = (fRec5[0] - ((((fRec4[1] * (9.14462797656761e-10 + (fConst1 * (fConst22 + (fConst21 * fRec3[0]))))) + (fRec4[2] * (9.14462797656761e-10 + (fConst1 * (fConst20 + (fConst18 * fRec3[0])))))) + (fRec4[3] * (3.04820932552254e-10 + (fConst1 * (fConst16 + (fConst15 * fRec3[0])))))) / fTemp1));
		double fTemp3 = (2.98622786824758e-08 + (fConst1 * (fConst34 + (fConst32 * fRec3[0]))));
		fRec6[0] = (fRec5[0] - ((((fRec6[1] * (8.95868360474273e-08 + (fConst1 * (fConst42 + (fConst41 * fRec3[0]))))) + (fRec6[2] * (8.95868360474273e-08 + (fConst1 * (fConst40 + (fConst38 * fRec3[0])))))) + (fRec6[3] * (2.98622786824758e-08 + (fConst1 * (fConst36 + (fConst35 * fRec3[0])))))) / fTemp3));
		double fTemp4 = symclip(((iSlow2)?(fConst30 * (((((fConst48 * fRec6[0]) + (fConst47 * fRec6[1])) + (fConst46 * fRec6[2])) + (fConst44 * fRec6[3])) / fTemp3)):(fConst30 * (((((fConst29 * fRec4[0]) + (fConst28 * fRec4[1])) + (fConst27 * fRec4[2])) + (fConst25 * fRec4[3])) / fTemp1))));
		fVec1[0] = fTemp4;
		fRec2[0] = (fConst23 * ((fVec1[0] - fVec1[1]) + (fConst10 * fRec2[1])));
		fRec1[0] = (fRec2[0] - (fConst8 * (((fConst6 * fRec1[1]) + (fConst5 * fRec1[2])) + (fConst3 * fRec1[3]))));
		double fTemp5 = (1.25088136838954e-13 * fRec0[0]);
		output0[i] = (FAUSTFLOAT)(fConst49 * ((((fRec1[0] * ((0 - fTemp0) - 4.16960456129847e-16)) + (fRec1[1] * (1.25088136838954e-15 + fTemp5))) + (fRec1[2] * ((0 - fTemp5) - 1.25088136838954e-15))) + (fRec1[3] * (4.16960456129847e-16 + fTemp0))));
		// post processing
		for (int i=3; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec2[1] = fRec2[0];
		fVec1[1] = fVec1[0];
		for (int i=3; i>0; i--) fRec6[i] = fRec6[i-1];
		for (int i=3; i>0; i--) fRec4[i] = fRec4[i-1];
		fRec5[1] = fRec5[0];
		fVec0[1] = fVec0[0];
		fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case INTENSITY: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	// static const value_pair fslider2_values[] = {{"Bass"},{"Bright"},{0}};
	case MODE: 
		fslider2_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case VOLUME: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   INTENSITY, 
   MODE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace vfm
