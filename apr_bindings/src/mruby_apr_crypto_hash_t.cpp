/*
 * apr_crypto_hash_t
 * Defined in file apr_random.h @ line 38
 */

/*
 * TODO: INCLUDES
 */

#include "mruby_APR.h"

#if BIND_AprCryptoHashT_TYPE

/*
 * Class Methods
 */

#if BIND_AprCryptoHashT_MALLOC
mrb_value
mrb_APR_AprCryptoHashT_malloc(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t* native_object = (apr_crypto_hash_t*)malloc(sizeof(apr_crypto_hash_t));
  return mruby_box_apr_crypto_hash_t(mrb, native_object);
}
#endif

mrb_value
mrb_APR_AprCryptoHashT_free(mrb_state* mrb, mrb_value self) {
  mrb_value to_free;
  mrb_get_args(mrb, "o", &to_free);

  if (!mrb_obj_is_kind_of(mrb, to_free, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "APR::AprCryptoHashT.free can only free objects of type APR::AprCryptoHashT");
    return mrb_nil_value();
  }

  apr_crypto_hash_t * native_to_free = mruby_unbox_apr_crypto_hash_t(to_free);
  if (native_to_free != NULL) {
    free(native_to_free);
  }
  DATA_PTR(to_free) = NULL;

  return mrb_nil_value();
}

mrb_value
mrb_APR_AprCryptoHashT_clear_pointer(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "APR::AprCryptoHashT.clear_pointer can only clear objects of type APR::AprCryptoHashT");
    return mrb_nil_value();
  }

  DATA_PTR(ruby_object) = NULL;

  return mrb_nil_value();
}

mrb_value
mrb_APR_AprCryptoHashT_address_of(mrb_state* mrb, mrb_value self) {
  mrb_value ruby_object;
  mrb_get_args(mrb, "o", &ruby_object);

  if (!mrb_obj_is_kind_of(mrb, ruby_object, mrb_class_ptr(self))) {
    mrb_raise(mrb, E_TYPE_ERROR, "APR::AprCryptoHashT.address_of can only get the address for objects of type APR::AprCryptoHashT");
    return mrb_nil_value();
  }

  apr_crypto_hash_t * native_object = mruby_unbox_apr_crypto_hash_t(ruby_object);

  return mrb_fixnum_value((mrb_int) native_object);
}

/*
 * Fields
 */

#if BIND_AprCryptoHashT_init_FIELD
/* get_init
 *
 * Return Type: apr_crypto_hash_init_t *
 */
mrb_value
mrb_APR_AprCryptoHashT_get_init(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);

  apr_crypto_hash_init_t * native_field = native_self->init;

  mrb_value ruby_field = TODO_mruby_box_apr_crypto_hash_init_t_PTR(mrb, native_field);
  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@init_box"), ruby_field);

  return ruby_field;
}

/* set_init
 *
 * Parameters:
 * - value: apr_crypto_hash_init_t *
 */
mrb_value
mrb_APR_AprCryptoHashT_set_init(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@init_box"), ruby_field);

  apr_crypto_hash_init_t * native_field = TODO_mruby_unbox_apr_crypto_hash_init_t_PTR(ruby_field);

  native_self->init = native_field;

  return ruby_field;
}
#endif

#if BIND_AprCryptoHashT_add_FIELD
/* get_add
 *
 * Return Type: apr_crypto_hash_add_t *
 */
mrb_value
mrb_APR_AprCryptoHashT_get_add(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);

  apr_crypto_hash_add_t * native_field = native_self->add;

  mrb_value ruby_field = TODO_mruby_box_apr_crypto_hash_add_t_PTR(mrb, native_field);
  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@add_box"), ruby_field);

  return ruby_field;
}

/* set_add
 *
 * Parameters:
 * - value: apr_crypto_hash_add_t *
 */
mrb_value
mrb_APR_AprCryptoHashT_set_add(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@add_box"), ruby_field);

  apr_crypto_hash_add_t * native_field = TODO_mruby_unbox_apr_crypto_hash_add_t_PTR(ruby_field);

  native_self->add = native_field;

  return ruby_field;
}
#endif

#if BIND_AprCryptoHashT_finish_FIELD
/* get_finish
 *
 * Return Type: apr_crypto_hash_finish_t *
 */
mrb_value
mrb_APR_AprCryptoHashT_get_finish(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);

  apr_crypto_hash_finish_t * native_field = native_self->finish;

  mrb_value ruby_field = TODO_mruby_box_apr_crypto_hash_finish_t_PTR(mrb, native_field);
  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@finish_box"), ruby_field);

  return ruby_field;
}

/* set_finish
 *
 * Parameters:
 * - value: apr_crypto_hash_finish_t *
 */
mrb_value
mrb_APR_AprCryptoHashT_set_finish(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@finish_box"), ruby_field);

  apr_crypto_hash_finish_t * native_field = TODO_mruby_unbox_apr_crypto_hash_finish_t_PTR(ruby_field);

  native_self->finish = native_field;

  return ruby_field;
}
#endif

#if BIND_AprCryptoHashT_size_FIELD
/* get_size
 *
 * Return Type: apr_size_t
 */
mrb_value
mrb_APR_AprCryptoHashT_get_size(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);

  apr_size_t native_field = native_self->size;

  if (native_field > MRB_INT_MAX) {
    mrb_raise(mrb, mrb->eStandardError_class, "MRuby cannot represent integers greater than MRB_INT_MAX");
    return mrb_nil_value();
  }
  mrb_value ruby_field = mrb_fixnum_value(native_field);
  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@size_box"), ruby_field);

  return ruby_field;
}

/* set_size
 *
 * Parameters:
 * - value: apr_size_t
 */
mrb_value
mrb_APR_AprCryptoHashT_set_size(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@size_box"), ruby_field);

  int native_field = mrb_fixnum(ruby_field);

  native_self->size = native_field;

  return ruby_field;
}
#endif

#if BIND_AprCryptoHashT_data_FIELD
/* get_data
 *
 * Return Type: void *
 */
mrb_value
mrb_APR_AprCryptoHashT_get_data(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);

  void * native_field = native_self->data;

  mrb_value ruby_field = TODO_mruby_box_void_PTR(mrb, native_field);
  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@data_box"), ruby_field);

  return ruby_field;
}

/* set_data
 *
 * Parameters:
 * - value: void *
 */
mrb_value
mrb_APR_AprCryptoHashT_set_data(mrb_state* mrb, mrb_value self) {
  apr_crypto_hash_t * native_self = mruby_unbox_apr_crypto_hash_t(self);
  mrb_value ruby_field;

  mrb_get_args(mrb, "o", &ruby_field);

  /* Store the ruby object to prevent garage collection of the underlying native object */
  mrb_iv_set(mrb, self, mrb_intern_cstr(mrb, "@data_box"), ruby_field);

  void * native_field = TODO_mruby_unbox_void_PTR(ruby_field);

  native_self->data = native_field;

  return ruby_field;
}
#endif


void mrb_APR_AprCryptoHashT_init(mrb_state* mrb) {
  RClass* AprCryptoHashT_class = mrb_define_class_under(mrb, APR_module(mrb), "AprCryptoHashT", mrb->object_class);

#if BIND_AprCryptoHashT_MALLOC
  mrb_define_class_method(mrb, AprCryptoHashT_class, "malloc", mrb_APR_AprCryptoHashT_malloc, MRB_ARGS_NONE());
#endif
  mrb_define_class_method(mrb, AprCryptoHashT_class, "free", mrb_APR_AprCryptoHashT_free, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, AprCryptoHashT_class, "clear_pointer", mrb_APR_AprCryptoHashT_clear_pointer, MRB_ARGS_ARG(1, 0));
  mrb_define_class_method(mrb, AprCryptoHashT_class, "address_of", mrb_APR_AprCryptoHashT_address_of, MRB_ARGS_ARG(1, 0));

  /*
   * Fields
   */
#if BIND_AprCryptoHashT_init_FIELD
  mrb_define_method(mrb, AprCryptoHashT_class, "init", mrb_APR_AprCryptoHashT_get_init, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, AprCryptoHashT_class, "init=", mrb_APR_AprCryptoHashT_set_init, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AprCryptoHashT_add_FIELD
  mrb_define_method(mrb, AprCryptoHashT_class, "add", mrb_APR_AprCryptoHashT_get_add, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, AprCryptoHashT_class, "add=", mrb_APR_AprCryptoHashT_set_add, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AprCryptoHashT_finish_FIELD
  mrb_define_method(mrb, AprCryptoHashT_class, "finish", mrb_APR_AprCryptoHashT_get_finish, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, AprCryptoHashT_class, "finish=", mrb_APR_AprCryptoHashT_set_finish, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AprCryptoHashT_size_FIELD
  mrb_define_method(mrb, AprCryptoHashT_class, "size", mrb_APR_AprCryptoHashT_get_size, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, AprCryptoHashT_class, "size=", mrb_APR_AprCryptoHashT_set_size, MRB_ARGS_ARG(1, 0));
#endif
#if BIND_AprCryptoHashT_data_FIELD
  mrb_define_method(mrb, AprCryptoHashT_class, "data", mrb_APR_AprCryptoHashT_get_data, MRB_ARGS_ARG(0, 0));
  mrb_define_method(mrb, AprCryptoHashT_class, "data=", mrb_APR_AprCryptoHashT_set_data, MRB_ARGS_ARG(1, 0));
#endif

}

#endif
