/*!
 * \file Engine_Enum.h
 * \date 2015/04/05 8:42
 *
 * \author Administrator
 * Contact: user@company.com
 *
 * \brief 
 *
 * TODO: long description
 *
 * \note
*/
#ifndef Engine_Enum_h__
#define Engine_Enum_h__

namespace Engine
{
	enum ANGLE { ANGLE_X, ANGLE_Y, ANGLE_Z, ANGLE_END };
	enum BUFFERTYPE { BUFFER_RCTEX, BUFFER_CUBECOL, BUFFER_SPHERECOL };
	enum MESHTYPE { MESH_STATIC, MESH_DYNAMIC };
	enum TEXTURETYPE { TEXTURE_NORMAL, TEXTURE_CUBE };	
}

#endif // Engine_Enum_h__