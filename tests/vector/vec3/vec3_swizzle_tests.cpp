#include "gtest/gtest.h"
#include "helmath.h"

using namespace hm;

class Vec3SwizzleFixture : public ::testing::Test {
public:
    Vec3f rhs;
    Vec3f lhs;

    void SetUp()
    {
        rhs = Vec3f{1.0f, 2.0f, 3.0f};
        lhs = Vec3f{4.0f, 3.0f, 2.0f};
    }
};


// ----------------------------------
// Vector creation from swizzle tests
// ----------------------------------
TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xxx)
{
    Vec3f res{lhs.xxx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xxy)
{
    Vec3f res{lhs.xxy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xxz)
{
    Vec3f res{lhs.xxz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xyx)
{
    Vec3f res{lhs.xyx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xyy)
{
    Vec3f res{lhs.xyy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xyz)
{
    Vec3f res{lhs.xyz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xzx)
{
    Vec3f res{lhs.xzx};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xzy)
{
    Vec3f res{lhs.xzy};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_xzz)
{
    Vec3f res{lhs.xzz};

    ASSERT_FLOAT_EQ(res.x, 4.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yxx)
{
    Vec3f res{lhs.yxx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yxy)
{
    Vec3f res{lhs.yxy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yxz)
{
    Vec3f res{lhs.yxz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yyx)
{
    Vec3f res{lhs.yyx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yyy)
{
    Vec3f res{lhs.yyy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yyz)
{
    Vec3f res{lhs.yyz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yzx)
{
    Vec3f res{lhs.yzx};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yzy)
{
    Vec3f res{lhs.yzy};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_yzz)
{
    Vec3f res{lhs.yzz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zxx)
{
    Vec3f res{lhs.zxx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zxy)
{
    Vec3f res{lhs.zxy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zxz)
{
    Vec3f res{lhs.zxz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zyx)
{
    Vec3f res{lhs.zyx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zyy)
{
    Vec3f res{lhs.zyy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zyz)
{
    Vec3f res{lhs.zyz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 3.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zzx)
{
    Vec3f res{lhs.zzx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zzy)
{
    Vec3f res{lhs.zzy};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_zzz)
{
    Vec3f res{lhs.zzz};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rrr)
{
    Vec3f res{lhs.rrr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rrg)
{
    Vec3f res{lhs.rrg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rrb)
{
    Vec3f res{lhs.rrb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rgr)
{
    Vec3f res{lhs.rgr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rgg)
{
    Vec3f res{lhs.rgg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rgb)
{
    Vec3f res{lhs.rgb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rbr)
{
    Vec3f res{lhs.rbr};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rbg)
{
    Vec3f res{lhs.rbg};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_rbb)
{
    Vec3f res{lhs.rbb};

    ASSERT_FLOAT_EQ(res.r, 4.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_grr)
{
    Vec3f res{lhs.grr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_grg)
{
    Vec3f res{lhs.grg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_grb)
{
    Vec3f res{lhs.grb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ggr)
{
    Vec3f res{lhs.ggr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ggg)
{
    Vec3f res{lhs.ggg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ggb)
{
    Vec3f res{lhs.ggb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_gbr)
{
    Vec3f res{lhs.gbr};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_gbg)
{
    Vec3f res{lhs.gbg};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_gbb)
{
    Vec3f res{lhs.gbb};

    ASSERT_FLOAT_EQ(res.r, 3.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_brr)
{
    Vec3f res{lhs.brr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_brg)
{
    Vec3f res{lhs.brg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_brb)
{
    Vec3f res{lhs.brb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 4.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_bgr)
{
    Vec3f res{lhs.bgr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_bgg)
{
    Vec3f res{lhs.bgg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_bgb)
{
    Vec3f res{lhs.bgb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 3.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_bbr)
{
    Vec3f res{lhs.bbr};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_bbg)
{
    Vec3f res{lhs.bbg};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_bbb)
{
    Vec3f res{lhs.bbb};

    ASSERT_FLOAT_EQ(res.r, 2.0f);
    ASSERT_FLOAT_EQ(res.g, 2.0f);
    ASSERT_FLOAT_EQ(res.b, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_sss)
{
    Vec3f res{lhs.sss};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_sst)
{
    Vec3f res{lhs.sst};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ssp)
{
    Vec3f res{lhs.ssp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_sts)
{
    Vec3f res{lhs.sts};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_stt)
{
    Vec3f res{lhs.stt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_stp)
{
    Vec3f res{lhs.stp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_sps)
{
    Vec3f res{lhs.sps};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_spt)
{
    Vec3f res{lhs.spt};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_spp)
{
    Vec3f res{lhs.spp};

    ASSERT_FLOAT_EQ(res.s, 4.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_tss)
{
    Vec3f res{lhs.tss};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_tst)
{
    Vec3f res{lhs.tst};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_tsp)
{
    Vec3f res{lhs.tsp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_tts)
{
    Vec3f res{lhs.tts};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ttt)
{
    Vec3f res{lhs.ttt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ttp)
{
    Vec3f res{lhs.ttp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_tps)
{
    Vec3f res{lhs.tps};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_tpt)
{
    Vec3f res{lhs.tpt};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_tpp)
{
    Vec3f res{lhs.tpp};

    ASSERT_FLOAT_EQ(res.s, 3.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_pss)
{
    Vec3f res{lhs.pss};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_pst)
{
    Vec3f res{lhs.pst};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_psp)
{
    Vec3f res{lhs.psp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 4.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_pts)
{
    Vec3f res{lhs.pts};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ptt)
{
    Vec3f res{lhs.ptt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ptp)
{
    Vec3f res{lhs.ptp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 3.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_pps)
{
    Vec3f res{lhs.pps};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ppt)
{
    Vec3f res{lhs.ppt};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_vector_creation_from_ppp)
{
    Vec3f res{lhs.ppp};

    ASSERT_FLOAT_EQ(res.s, 2.0f);
    ASSERT_FLOAT_EQ(res.t, 2.0f);
    ASSERT_FLOAT_EQ(res.p, 2.0f);
}


// -------------------------
// Swizzle assignment tests
// -------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_assignment_operator_xyz)
{
    lhs.xyz = rhs.xzx;

    ASSERT_FLOAT_EQ(lhs.x, 1.0f);
    ASSERT_FLOAT_EQ(lhs.y, 3.0f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

// -------------------------
// Swizzle operator + tests
// -------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_plus_swizzle)
{
    Vec3f res{lhs.xyz + rhs.zxy};

    ASSERT_FLOAT_EQ(res.x, 7.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzleAAA_plus_swizzle)
{
    Vec3f res{lhs.xyz + rhs.xxx};

    ASSERT_FLOAT_EQ(res.x, 5.0f);
    ASSERT_FLOAT_EQ(res.y, 4.0f);
    ASSERT_FLOAT_EQ(res.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_plus_scalar)
{
    Vec3f res{lhs.xyz + 2.0f};

    ASSERT_FLOAT_EQ(res.x, 6.0f);
    ASSERT_FLOAT_EQ(res.y, 5.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzleAAA_plus_scalar)
{
    Vec3f res{lhs.xxx + 2.0f};

    ASSERT_FLOAT_EQ(res.x, 6.0f);
    ASSERT_FLOAT_EQ(res.y, 6.0f);
    ASSERT_FLOAT_EQ(res.z, 6.0f);
}


// ------------------------
// Swizzle operator - tests
// ------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_minus_swizzle)
{
    Vec3f res{lhs.xyz - rhs.yzx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 0.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzleAAA_minus_swizzle)
{
    Vec3f res{lhs.xxx - rhs.xyz};

    ASSERT_FLOAT_EQ(res.x, 3.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_minus_scalar)
{
    Vec3f res{lhs.xyz - 2.0f};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.0f);
    ASSERT_FLOAT_EQ(res.z, 0.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzleAAA_minus_scalar)
{
    Vec3f res{lhs.xxx - 2.0f};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}


// ------------------------
// Swizzle operator * tests
// ------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_mult_swizzle)
{
    Vec3f res{lhs.xyz * rhs.zzy};

    ASSERT_FLOAT_EQ(res.x, 12.0f);
    ASSERT_FLOAT_EQ(res.y, 9.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzleAAA_mult_swizzle)
{
    Vec3f res{lhs.xxx * rhs.zzy};

    ASSERT_FLOAT_EQ(res.x, 12.0f);
    ASSERT_FLOAT_EQ(res.y, 12.0f);
    ASSERT_FLOAT_EQ(res.z, 8.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_mult_scalar)
{
    Vec3f res{lhs.xyz * 2.0f};

    ASSERT_FLOAT_EQ(res.x, 8.0f);
    ASSERT_FLOAT_EQ(res.y, 6.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzleAAA_mult_scalar)
{
    Vec3f res{lhs.xxx * 2.0f};

    ASSERT_FLOAT_EQ(res.x, 8.0f);
    ASSERT_FLOAT_EQ(res.y, 8.0f);
    ASSERT_FLOAT_EQ(res.z, 8.0f);
}


// ------------------------
// Swizzle operator / tests
// ------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_div_swizzle)
{
    Vec3f res{lhs.xyz / rhs.yyx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.5f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzleAAA_div_swizzle)
{
    Vec3f res{lhs.xxx / rhs.yyx};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 4.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_div_scalar)
{
    Vec3f res{lhs.xyz / 2.0f};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 1.5f);
    ASSERT_FLOAT_EQ(res.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizleAAA_div_scalar)

{
    Vec3f res{lhs.xxx / 2.0f};

    ASSERT_FLOAT_EQ(res.x, 2.0f);
    ASSERT_FLOAT_EQ(res.y, 2.0f);
    ASSERT_FLOAT_EQ(res.z, 2.0f);
}


// -------------------------
// Swizzle operator += tests
// -------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_plus_equals_swizzle)
{
    lhs.xyz += rhs.yzx;

    ASSERT_FLOAT_EQ(lhs.x, 6.0f);
    ASSERT_FLOAT_EQ(lhs.y, 6.0f);
    ASSERT_FLOAT_EQ(lhs.z, 3.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_plus_equals_scalar)
{
    lhs.xyz += 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 6.0f);
    ASSERT_FLOAT_EQ(lhs.y, 5.0f);
    ASSERT_FLOAT_EQ(lhs.z, 4.0f);
}


// -------------------------
// Swizzle operator -= tests
// -------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_minus_equals_swizzle)
{
    lhs.xyz -= lhs.xxy;

    ASSERT_FLOAT_EQ(lhs.x, 0.0f);
    ASSERT_FLOAT_EQ(lhs.y, -1.0f);
    ASSERT_FLOAT_EQ(lhs.z, -1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_minus_equals_scalar)
{
    lhs.xyz -= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.0f);
    ASSERT_FLOAT_EQ(lhs.z, 0.0f);
}


// -------------------------
// Swizzle operator *= tests
// -------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_mult_equals_swizzle)
{
    lhs.xyz *= rhs.yyx;

    ASSERT_FLOAT_EQ(lhs.x, 8.0f);
    ASSERT_FLOAT_EQ(lhs.y, 6.0f);
    ASSERT_FLOAT_EQ(lhs.z, 2.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_mult_equals_scalar)
{
    lhs.xyz *= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 8.0f);
    ASSERT_FLOAT_EQ(lhs.y, 6.0f);
    ASSERT_FLOAT_EQ(lhs.z, 4.0f);
}


// -------------------------
// Swizzle operator /= tests
// -------------------------
TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_div_equals_swizzle)
{
    lhs.xyz /= rhs.yyy;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.5f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}

TEST_F(Vec3SwizzleFixture, test_swizzle_operator_swizzle_div_equals_scalar)
{
    lhs.xyz /= 2.0f;

    ASSERT_FLOAT_EQ(lhs.x, 2.0f);
    ASSERT_FLOAT_EQ(lhs.y, 1.5f);
    ASSERT_FLOAT_EQ(lhs.z, 1.0f);
}
