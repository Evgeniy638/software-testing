package tests;

import io.qameta.allure.Description;
import io.qameta.allure.Epic;
import io.qameta.allure.Feature;
import io.qameta.allure.Severity;
import io.qameta.allure.SeverityLevel;
import io.qameta.allure.Story;
import org.testng.annotations.Listeners;
import org.testng.annotations.Test;
import utils.listeners.TestListener;

import java.lang.reflect.Method;

import static utils.extentreports.ExtentTestManager.startTest;

@Listeners({ TestListener.class })
@Epic("Главаная страница")
@Feature("Работа с главно")
public class HomeTest extends BaseTest {
    @Test(priority = 0, description = "Проверка слайдера на главной странице")
    @Severity(SeverityLevel.BLOCKER)
    @Description("Переключение слайдера с помощью кнопок и булетов")
    @Story("Пользователь щёлкает на булеты и кнопки у слайдера")
    public void checkMainSlider(Method method) {
        startTest(method.getName(), "Проверка слайдера на главной странице");

        homePage.goToHome()
                .goToSlider()
                .checkNextButton()
                .checkPrevButton()
                .checkPaginationBullet();
    }
}
