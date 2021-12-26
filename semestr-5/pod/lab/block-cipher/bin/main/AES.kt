import java.util.*
import javax.crypto.Cipher
import javax.crypto.spec.IvParameterSpec
import javax.crypto.spec.SecretKeySpec
import AES.Mode.*
import kotlin.system.measureTimeMillis

class AES(
    val mode: Mode,
    key: String
) {
    enum class Mode {
        ECB, CBC, OFB, CFB, CTR
    }

    val cipher = Cipher.getInstance("AES/$mode/PKCS5Padding")
    private val secretKeySpec = SecretKeySpec(key.toByteArray(), "AES")
    private val ivParameterSpec = IvParameterSpec(key.take(16).toByteArray())

    fun encrypt(message: String): String {
        when (mode) {
            ECB -> cipher.init(Cipher.ENCRYPT_MODE, secretKeySpec)
            else -> cipher.init(Cipher.ENCRYPT_MODE, secretKeySpec, ivParameterSpec)
        }

        val encryptedValue = cipher.doFinal(message.toByteArray())
        return Base64.getEncoder().encodeToString(encryptedValue)
    }

    fun decrypt(message: String): String {
        when (mode) {
            ECB -> cipher.init(Cipher.DECRYPT_MODE, secretKeySpec)
            else -> cipher.init(Cipher.DECRYPT_MODE, secretKeySpec, ivParameterSpec)
        }

        val decryptedByteValue = cipher.doFinal(Base64.getDecoder().decode(message))
        return String(decryptedByteValue)
    }

    fun encryptAndMeasureTime(message: String) =
        measureTimeMillis { encrypt(message) }

    fun decryptAndMeasureTime(message: String) =
        measureTimeMillis { decrypt(message) }
}