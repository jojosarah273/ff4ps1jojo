
DRAWENV * PutDrawEnv(DRAWENV *env)

{
  undefined *puVar1;
  
  if (1 < DAT_8019db56) {
    (*(code *)PTR_printf_8019db50)("PutDrawEnv(%08x)...\n",env);
  }
  SYS_OBJ_13C0(&env->dr_env,env);
  puVar1 = PTR_PTR_8019db4c;
  (env->dr_env).tag = (env->dr_env).tag | 0xffffff;
  (**(code **)(puVar1 + 8))(*(undefined4 *)(puVar1 + 0x18),&env->dr_env,0x40,0);
  memcpy("",(uchar *)env,0x5c);
  return env;
}



