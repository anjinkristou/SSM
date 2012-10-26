/**
 * @file ssm.h
 * @brief SSM‚ðC‚ÅŽg‚¤‚½‚ß‚ÌAPI
 */

#ifndef __SSM_H__
#define __SSM_H__


#ifdef __cplusplus
extern "C"
{
#endif

/** @addtogroup SSM_API */
/*@{*/

    /**
     * @brief Allocate shared memory space
     * @param[in] size The size of memory to allocate
     * @return SSM management ID
     * @retval -1 error
     *
     */
    int smm_create(int size);

    /**
     * @brief Get a pointer to the shared memory space
     * @param[in] id The ID of the memory
     * @return A pointer to the shared memory space
     * @retval -1 error
     *
     */
    void *smm_attach(int id);

    /**
     * @brief Destroy the shared memory space
     * @param[in] id The ID of the memory
     * @return Operation status
     * @retval 0 sucess
     * @retval -1 error
     *
     */
    int smm_destroy(int id);

    /**
     * @brief Release the shared memory space
     * @param[in] id The ID of the memory
     * @return Operation status
     * @retval 0 sucess
     * @retval -1 error
     *
     */
    int smm_dettach(int id);

/*@}*/

#ifdef __cplusplus
}
#endif
