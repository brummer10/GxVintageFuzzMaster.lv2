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
	0,0.970874,101.97,100, {
	0.0,-0.0297094517538,-0.0600106764386,-0.0909157810379,-0.122426702394,
	-0.154512792375,-0.187043325084,-0.219597292059,-0.251049236888,-0.279269262629,
	-0.302229948146,-0.319764727359,-0.333093000826,-0.343502317962,-0.351909526762,
	-0.358908857328,-0.36488466473,-0.370092137015,-0.374706320512,-0.378851176595,
	-0.382617067841,-0.386071573306,-0.389266381829,-0.392241815715,-0.395029880998,
	-0.397656375663,-0.400142379724,-0.402505329872,-0.40475980878,-0.40691813447,
	-0.40899080703,-0.410986851861,-0.412914086728,-0.41477933192,-0.416588577398,
	-0.418347117027,-0.420059657378,-0.421730406641,-0.423363147893,-0.42496129992,
	-0.426527968065,-0.428065987051,-0.429577957267,-0.431066275734,-0.432533162692,
	-0.433980684588,-0.435410774074,-0.436825247529,-0.438225820518,-0.439614121545,
	-0.440991704367,-0.442360059136,-0.443720622562,-0.445074787283,-0.446423910594,
	-0.447769322678,-0.449112334467,-0.450454245238,-0.451796350073,-0.45313994727,
	-0.454486345819,-0.455836873054,-0.457192882585,-0.458555762643,-0.459926944953,
	-0.461307914299,-0.462700218942,-0.464105482085,-0.465525414618,-0.466961829402,
	-0.468416657431,-0.469891966247,-0.471389981094,-0.472913109397,-0.474463969287,
	-0.47604542308,-0.477660616872,-0.479313027692,-0.481006520102,-0.482745414666,
	-0.484534571498,-0.4863794931,-0.488286452181,-0.49026265218,-0.492316431132,
	-0.494457523819,-0.496697403477,-0.499049733989,-0.501530978499,-0.504161234316,
	-0.506965403328,-0.509974874057,-0.513230009815,-0.516783956265,-0.520708708794,
	-0.525105268876,-0.530121719205,-0.535988020132,-0.543090399279,-0.552155806647
	}
};


class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec2[2];
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fRec3[4];
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
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
	double 	fRec4[4];
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fRec1[4];
	double 	fConst45;
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
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<4; i++) fRec3[i] = 0;
	for (int i=0; i<4; i++) fRec4[i] = 0;
	for (int i=0; i<4; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = double(min(192000, max(1, fSamplingFreq)));
	fConst1 = (9.02642841732258e-15 * fConst0);
	fConst2 = (1.29314506250926e-10 + (fConst0 * ((fConst0 * (7.58838021629481e-13 - fConst1)) - 1.80320898419597e-11)));
	fConst3 = (2.70792852519677e-14 * fConst0);
	fConst4 = (3.87943518752777e-10 + (fConst0 * ((fConst0 * (fConst3 - 7.58838021629481e-13)) - 1.80320898419597e-11)));
	fConst5 = (3.87943518752777e-10 + (fConst0 * (1.80320898419597e-11 + (fConst0 * (0 - (7.58838021629481e-13 + fConst3))))));
	fConst6 = (1.29314506250926e-10 + (fConst0 * (1.80320898419597e-11 + (fConst0 * (7.58838021629481e-13 + fConst1)))));
	fConst7 = (1.0 / fConst6);
	fConst8 = (1.75174058966859e-14 * fConst0);
	fConst9 = ((fConst0 * (0 - (6.89128730192832e-13 + fConst8))) - 6.09641865104507e-12);
	fConst10 = (1.77503953323676e-14 * fConst0);
	fConst11 = (5.64220272644189e-11 + (fConst0 * (2.76999562285192e-12 + fConst10)));
	fConst12 = (6.09641865104507e-12 + (fConst0 * (fConst8 - 6.89128730192832e-13)));
	fConst13 = ((fConst0 * (2.76999562285192e-12 - fConst10)) - 5.64220272644189e-11);
	fConst14 = (5.25522176900578e-14 * fConst0);
	fConst15 = (6.09641865104507e-12 + (fConst0 * (6.89128730192832e-13 - fConst14)));
	fConst16 = (5.32511859971027e-14 * fConst0);
	fConst17 = ((fConst0 * (fConst16 - 2.76999562285192e-12)) - 5.64220272644189e-11);
	fConst18 = ((fConst0 * (6.89128730192832e-13 + fConst14)) - 6.09641865104507e-12);
	fConst19 = (5.64220272644189e-11 + (fConst0 * (0 - (2.76999562285192e-12 + fConst16))));
	fConst20 = (1.50377877331799e-15 * fConst0);
	fConst21 = (4.87399871393726e-11 + fConst20);
	fConst22 = (4.51133631995396e-15 * fConst0);
	fConst23 = (0 - (4.87399871393726e-11 + fConst22));
	fConst24 = (fConst22 - 4.87399871393726e-11);
	fConst25 = (4.87399871393726e-11 - fConst20);
	fConst26 = faustpower<2>(fConst0);
	fConst27 = (1.71612117414761e-14 * fConst0);
	fConst28 = ((fConst0 * (0 - (2.76200573501281e-12 + fConst27))) - 5.97245573649515e-11);
	fConst29 = (1.73894636335001e-14 * fConst0);
	fConst30 = (1.59619235172371e-09 + (fConst0 * (1.25509631951289e-11 + fConst29)));
	fConst31 = (5.97245573649515e-11 + (fConst0 * (fConst27 - 2.76200573501281e-12)));
	fConst32 = ((fConst0 * (1.25509631951289e-11 - fConst29)) - 1.59619235172371e-09);
	fConst33 = (5.14836352244284e-14 * fConst0);
	fConst34 = (5.97245573649515e-11 + (fConst0 * (2.76200573501281e-12 - fConst33)));
	fConst35 = (5.21683909005002e-14 * fConst0);
	fConst36 = ((fConst0 * (fConst35 - 1.25509631951289e-11)) - 1.59619235172371e-09);
	fConst37 = ((fConst0 * (2.76200573501281e-12 + fConst33)) - 5.97245573649515e-11);
	fConst38 = (1.59619235172371e-09 + (fConst0 * (0 - (1.25509631951289e-11 + fConst35))));
	fConst39 = (1.47320134577956e-15 * fConst0);
	fConst40 = (4.7748921530771e-11 + fConst39);
	fConst41 = (4.41960403733869e-15 * fConst0);
	fConst42 = (0 - (4.7748921530771e-11 + fConst41));
	fConst43 = (fConst41 - 4.7748921530771e-11);
	fConst44 = (4.7748921530771e-11 - fConst39);
	fConst45 = (faustpower<3>(fConst0) / fConst6);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = (f/(3.0 + f) - clip.low) * clip.istep;
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
		fRec2[0] = ((0.993 * fRec2[1]) + fSlow1);
		double fTemp1 = (3.04820932552254e-10 + (fConst0 * (fConst11 + (fConst9 * fRec2[0]))));
		double fTemp2 = (double)input0[i];
		fRec3[0] = (fTemp2 - ((((fRec3[1] * (9.14462797656761e-10 + (fConst0 * (fConst19 + (fConst18 * fRec2[0]))))) + (fRec3[2] * (9.14462797656761e-10 + (fConst0 * (fConst17 + (fConst15 * fRec2[0])))))) + (fRec3[3] * (3.04820932552254e-10 + (fConst0 * (fConst13 + (fConst12 * fRec2[0])))))) / fTemp1));
		double fTemp3 = (2.98622786824758e-08 + (fConst0 * (fConst30 + (fConst28 * fRec2[0]))));
		fRec4[0] = (fTemp2 - ((((fRec4[1] * (8.95868360474273e-08 + (fConst0 * (fConst38 + (fConst37 * fRec2[0]))))) + (fRec4[2] * (8.95868360474273e-08 + (fConst0 * (fConst36 + (fConst34 * fRec2[0])))))) + (fRec4[3] * (2.98622786824758e-08 + (fConst0 * (fConst32 + (fConst31 * fRec2[0])))))) / fTemp3));
		fRec1[0] = (symclip(((iSlow2)?(fConst26 * (((((fConst44 * fRec4[0]) + (fConst43 * fRec4[1])) + (fConst42 * fRec4[2])) + (fConst40 * fRec4[3])) / fTemp3)):(fConst26 * (((((fConst25 * fRec3[0]) + (fConst24 * fRec3[1])) + (fConst23 * fRec3[2])) + (fConst21 * fRec3[3])) / fTemp1)))) - (fConst7 * (((fConst5 * fRec1[1]) + (fConst4 * fRec1[2])) + (fConst2 * fRec1[3]))));
		double fTemp4 = (1.25088136838954e-13 * fRec0[0]);
		output0[i] = (FAUSTFLOAT)(fConst45 * ((((fRec1[0] * ((0 - fTemp0) - 4.16960456129847e-16)) + (fRec1[1] * (1.25088136838954e-15 + fTemp4))) + (fRec1[2] * ((0 - fTemp4) - 1.25088136838954e-15))) + (fRec1[3] * (4.16960456129847e-16 + fTemp0))));
		// post processing
		for (int i=3; i>0; i--) fRec1[i] = fRec1[i-1];
		for (int i=3; i>0; i--) fRec4[i] = fRec4[i-1];
		for (int i=3; i>0; i--) fRec3[i] = fRec3[i-1];
		fRec2[1] = fRec2[0];
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
